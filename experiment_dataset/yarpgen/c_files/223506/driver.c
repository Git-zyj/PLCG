#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16987010646741123456ULL;
signed char var_3 = (signed char)-40;
unsigned char var_4 = (unsigned char)198;
_Bool var_6 = (_Bool)1;
unsigned int var_10 = 3070067140U;
int var_11 = -1743850691;
unsigned int var_12 = 862615930U;
unsigned char var_13 = (unsigned char)219;
signed char var_15 = (signed char)-58;
int zero = 0;
signed char var_17 = (signed char)29;
unsigned char var_18 = (unsigned char)198;
signed char var_19 = (signed char)93;
unsigned int arr_0 [21] ;
_Bool arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1344611264U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
