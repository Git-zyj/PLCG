#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-28;
long long int var_3 = -9052460648069259836LL;
unsigned char var_4 = (unsigned char)90;
short var_7 = (short)1371;
long long int var_8 = 2962119364729403155LL;
int zero = 0;
unsigned long long int var_10 = 8953915972643809683ULL;
signed char var_11 = (signed char)19;
long long int var_12 = -5717577188187650143LL;
long long int var_13 = 1298020110860067951LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 567864025U;
signed char arr_3 [15] ;
unsigned long long int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 8208026771354575208ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
