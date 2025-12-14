#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10162225496713363975ULL;
signed char var_3 = (signed char)127;
unsigned long long int var_9 = 313680280027830718ULL;
short var_11 = (short)-31359;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 439455505;
unsigned int var_19 = 2920865524U;
long long int var_20 = -3266014231251629489LL;
unsigned char arr_2 [21] ;
int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)170 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1312153041 : 1632412672;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
