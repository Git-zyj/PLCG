#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
unsigned char var_5 = (unsigned char)33;
unsigned short var_6 = (unsigned short)6777;
int var_7 = -1495890271;
long long int var_8 = -5489841303192439709LL;
int zero = 0;
short var_10 = (short)12804;
unsigned char var_11 = (unsigned char)102;
unsigned char var_12 = (unsigned char)235;
long long int var_13 = -3010789398649856612LL;
int var_14 = -897484674;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)57;
unsigned long long int var_17 = 13323502584663918520ULL;
unsigned char arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)191 : (unsigned char)12;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
