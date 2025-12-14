#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27566;
unsigned short var_3 = (unsigned short)30717;
long long int var_4 = 5391795621161307025LL;
_Bool var_6 = (_Bool)0;
int var_7 = 1834616027;
long long int var_10 = 8221519238465887345LL;
unsigned short var_13 = (unsigned short)24183;
unsigned char var_14 = (unsigned char)107;
int zero = 0;
unsigned short var_16 = (unsigned short)29842;
short var_17 = (short)9871;
signed char var_18 = (signed char)-16;
unsigned short var_19 = (unsigned short)38027;
unsigned char var_20 = (unsigned char)190;
unsigned short var_21 = (unsigned short)45971;
long long int var_22 = 1231696047758218993LL;
short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)29786;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
