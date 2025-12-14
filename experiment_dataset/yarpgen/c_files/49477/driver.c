#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28590;
_Bool var_1 = (_Bool)1;
int var_2 = 562845543;
_Bool var_3 = (_Bool)1;
int var_4 = 2070437434;
signed char var_5 = (signed char)99;
unsigned short var_6 = (unsigned short)58798;
signed char var_7 = (signed char)-114;
unsigned short var_10 = (unsigned short)43897;
long long int var_11 = 1800702279974837303LL;
int zero = 0;
short var_15 = (short)3151;
short var_16 = (short)9559;
short var_17 = (short)20876;
signed char var_18 = (signed char)78;
unsigned long long int var_19 = 7100244850085687721ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-14870;
long long int arr_0 [19] [19] ;
int arr_4 [19] [19] ;
short arr_6 [19] [19] [19] ;
short arr_7 [19] [19] [19] [19] ;
unsigned int arr_8 [10] ;
signed char arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 6146708359563232620LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -243745653 : 1710106681;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)25967;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)16648 : (short)16468;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 825348499U : 4085923428U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)22 : (signed char)(-127 - 1);
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
