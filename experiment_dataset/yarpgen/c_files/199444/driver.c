#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10078676644607961902ULL;
signed char var_2 = (signed char)33;
signed char var_3 = (signed char)27;
unsigned long long int var_6 = 8191353841512658771ULL;
signed char var_7 = (signed char)117;
unsigned char var_9 = (unsigned char)129;
int var_14 = -974593304;
int zero = 0;
int var_16 = 159093755;
long long int var_17 = 7953754782626997068LL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)197;
int var_20 = 404109388;
unsigned short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)13400;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
