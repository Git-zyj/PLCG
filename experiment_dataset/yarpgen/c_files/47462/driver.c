#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1742536917;
unsigned char var_6 = (unsigned char)123;
_Bool var_7 = (_Bool)0;
int zero = 0;
short var_15 = (short)-28992;
unsigned char var_16 = (unsigned char)71;
int var_17 = -901620279;
unsigned long long int var_18 = 17549954619232298705ULL;
int var_19 = -56997672;
unsigned int var_20 = 3893917756U;
unsigned char arr_0 [18] ;
unsigned int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3158734895U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
