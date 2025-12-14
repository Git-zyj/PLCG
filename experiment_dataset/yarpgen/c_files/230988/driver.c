#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 2375268884835991534ULL;
short var_3 = (short)1483;
signed char var_8 = (signed char)16;
unsigned long long int var_10 = 13583329229050905135ULL;
int zero = 0;
short var_11 = (short)-24609;
signed char var_12 = (signed char)39;
signed char var_13 = (signed char)73;
unsigned long long int var_14 = 11090939864187430397ULL;
long long int var_15 = 1535436102849076338LL;
signed char arr_1 [24] ;
unsigned char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)106;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
