#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -812183423;
int var_2 = -226007308;
int var_4 = 934854377;
int var_5 = 827128211;
int var_6 = 1621701363;
int var_9 = 1568310081;
int var_12 = 277989579;
int var_14 = -913745999;
int zero = 0;
int var_20 = -1975668147;
int var_21 = -294126365;
int var_22 = 1270268800;
int var_23 = 361305630;
int arr_2 [18] ;
int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 381434316 : -890610859;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1913721121 : 224498433;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
