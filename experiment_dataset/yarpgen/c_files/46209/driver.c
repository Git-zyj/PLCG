#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 775307847U;
_Bool var_2 = (_Bool)0;
short var_4 = (short)31145;
unsigned long long int var_7 = 8778732492006731512ULL;
signed char var_8 = (signed char)-115;
int var_10 = 2078677985;
unsigned short var_15 = (unsigned short)53543;
signed char var_16 = (signed char)-87;
int zero = 0;
unsigned long long int var_18 = 14349848954209085731ULL;
signed char var_19 = (signed char)-65;
unsigned long long int var_20 = 16333491699139997058ULL;
unsigned short var_21 = (unsigned short)61076;
short arr_0 [14] ;
long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)16091;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 4222653150244612992LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
