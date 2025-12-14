#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17226218131689305238ULL;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)64686;
short var_4 = (short)-17169;
unsigned long long int var_8 = 2074605261774732701ULL;
short var_9 = (short)13292;
short var_11 = (short)-16891;
int zero = 0;
long long int var_12 = -5814982674532711353LL;
unsigned long long int var_13 = 14144374571652400631ULL;
unsigned short var_14 = (unsigned short)34886;
long long int var_15 = 7404638713408923643LL;
unsigned short var_16 = (unsigned short)40967;
short var_17 = (short)32293;
long long int arr_1 [25] ;
short arr_3 [25] [25] ;
long long int arr_5 [25] [25] ;
unsigned long long int arr_7 [25] [25] ;
unsigned short arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -634936078910600556LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)4943;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -5441310595861560327LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 18372189174077332777ULL : 8260084654527924969ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18242 : (unsigned short)20272;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
