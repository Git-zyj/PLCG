#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1569442755;
unsigned char var_1 = (unsigned char)12;
signed char var_7 = (signed char)56;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1353072363U;
int zero = 0;
long long int var_13 = -452677825599449237LL;
unsigned int var_14 = 3418429240U;
long long int var_15 = 4792856090713068303LL;
short var_16 = (short)-32612;
unsigned char arr_3 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)66;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
