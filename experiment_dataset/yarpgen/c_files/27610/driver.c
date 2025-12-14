#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9633545839441360505ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1800623662U;
unsigned char var_3 = (unsigned char)170;
unsigned long long int var_6 = 5240598474414778305ULL;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)104;
unsigned short var_11 = (unsigned short)42218;
int zero = 0;
unsigned long long int var_12 = 904340111686921125ULL;
unsigned short var_13 = (unsigned short)5251;
unsigned long long int var_14 = 16489620821780392281ULL;
unsigned char var_15 = (unsigned char)181;
signed char var_16 = (signed char)-76;
unsigned char var_17 = (unsigned char)21;
unsigned long long int arr_1 [16] ;
unsigned int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2755695231912175526ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 613716238U;
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
