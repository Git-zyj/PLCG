#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 915982239;
unsigned long long int var_6 = 764353108640468431ULL;
int var_7 = 1270149046;
signed char var_8 = (signed char)75;
int zero = 0;
signed char var_12 = (signed char)125;
int var_13 = -1419149893;
int var_14 = 1810637453;
int arr_2 [20] ;
int arr_3 [20] [20] ;
int arr_4 [20] [20] ;
int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1974889258;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 366163021;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1468404983;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -1654564633;
}

void checksum() {
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
