#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = 8594818498545596012LL;
unsigned long long int var_8 = 2393614749371052974ULL;
unsigned long long int var_9 = 1928498683090058379ULL;
unsigned int var_10 = 3093324250U;
unsigned short var_11 = (unsigned short)7819;
unsigned int var_12 = 2371354236U;
long long int var_13 = -7770879703967279468LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 5213108262746125810LL;
signed char var_16 = (signed char)92;
signed char var_17 = (signed char)-35;
unsigned short var_18 = (unsigned short)40814;
int arr_0 [15] ;
long long int arr_2 [15] ;
unsigned long long int arr_3 [15] ;
_Bool arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 83392904;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -969376443525190809LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 12385684287173865366ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
