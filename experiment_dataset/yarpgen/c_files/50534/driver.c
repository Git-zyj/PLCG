#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5121821937745320825ULL;
unsigned int var_1 = 2190448749U;
short var_2 = (short)-16265;
unsigned int var_3 = 1001823751U;
unsigned int var_4 = 858526880U;
unsigned long long int var_6 = 18387207130133912781ULL;
short var_8 = (short)6053;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-10;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)41671;
unsigned long long int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 12912411610816221955ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
