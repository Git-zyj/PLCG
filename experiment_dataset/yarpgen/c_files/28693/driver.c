#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12537569524548491855ULL;
int var_5 = 1973534394;
signed char var_6 = (signed char)89;
unsigned long long int var_7 = 9251719264786795537ULL;
unsigned short var_12 = (unsigned short)10269;
long long int var_16 = -6660477763290760061LL;
unsigned int var_19 = 2042724631U;
int zero = 0;
unsigned short var_20 = (unsigned short)9605;
unsigned char var_21 = (unsigned char)149;
signed char var_22 = (signed char)84;
signed char var_23 = (signed char)-57;
unsigned int var_24 = 3765827837U;
signed char var_25 = (signed char)38;
_Bool arr_0 [16] ;
unsigned char arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)82;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
