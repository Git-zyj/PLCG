#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)104;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2118717757U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)100;
_Bool var_15 = (_Bool)0;
int var_16 = -674706474;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 2231271822353961636LL;
long long int var_19 = -1363186204975794368LL;
signed char var_20 = (signed char)-4;
unsigned int arr_2 [22] [22] [22] ;
signed char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 384155894U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)-7;
}

void checksum() {
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
