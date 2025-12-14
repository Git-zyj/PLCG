#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1834584246757273771LL;
unsigned int var_2 = 4094250506U;
long long int var_4 = -1471968191121865775LL;
long long int var_7 = -54393921502982262LL;
_Bool var_13 = (_Bool)0;
_Bool var_16 = (_Bool)1;
short var_18 = (short)-5001;
int zero = 0;
unsigned short var_19 = (unsigned short)28344;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8039171985050111304LL;
_Bool var_22 = (_Bool)1;
int arr_0 [10] [10] ;
short arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 1049267161;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-18123;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
