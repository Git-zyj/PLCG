#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6129747222240873092LL;
int var_1 = -961311095;
int var_2 = 1691062756;
unsigned char var_5 = (unsigned char)75;
signed char var_7 = (signed char)51;
unsigned short var_11 = (unsigned short)50607;
int var_13 = -727425035;
signed char var_15 = (signed char)75;
long long int var_17 = 303456544479377074LL;
int var_19 = -1140325158;
int zero = 0;
unsigned short var_20 = (unsigned short)42492;
short var_21 = (short)27900;
unsigned int var_22 = 945267204U;
unsigned long long int var_23 = 3862358603381772340ULL;
unsigned char var_24 = (unsigned char)50;
unsigned long long int var_25 = 12955057114450793394ULL;
long long int var_26 = -1322238694866225539LL;
signed char var_27 = (signed char)25;
_Bool var_28 = (_Bool)1;
_Bool arr_1 [20] [20] ;
unsigned long long int arr_4 [10] ;
unsigned long long int arr_7 [25] ;
signed char arr_2 [20] [20] ;
int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 4299441505055940342ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 10853536444336256680ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 2070473432;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
