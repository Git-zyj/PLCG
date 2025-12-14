#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)52;
unsigned char var_4 = (unsigned char)196;
_Bool var_5 = (_Bool)1;
int var_6 = -1271117249;
unsigned int var_9 = 2380935630U;
int zero = 0;
unsigned int var_11 = 781833219U;
unsigned int var_12 = 1811630951U;
int var_13 = -1738410428;
short var_14 = (short)-7062;
signed char var_15 = (signed char)23;
short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)5088;
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
