#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1784866165;
signed char var_1 = (signed char)95;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 3721903233U;
int var_9 = -1263642924;
short var_10 = (short)23221;
int var_11 = -925908718;
int zero = 0;
short var_12 = (short)-28771;
signed char var_13 = (signed char)36;
long long int var_14 = 7808500402533827842LL;
int var_15 = -65690561;
unsigned int var_16 = 875186121U;
unsigned int arr_0 [17] [17] ;
int arr_1 [17] ;
signed char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 1073629986U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1468536468 : -1578715740;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)99;
}

void checksum() {
    hash(&seed, var_12);
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
