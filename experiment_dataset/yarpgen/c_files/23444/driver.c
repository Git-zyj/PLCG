#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 972383038U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 13136449858477698758ULL;
int zero = 0;
long long int var_12 = 3145665185207755108LL;
signed char var_13 = (signed char)-59;
signed char var_14 = (signed char)-18;
unsigned short var_15 = (unsigned short)31285;
long long int var_16 = -4149137488888945408LL;
unsigned char var_17 = (unsigned char)176;
signed char arr_0 [11] ;
signed char arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-120 : (signed char)6;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
