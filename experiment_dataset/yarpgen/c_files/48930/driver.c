#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -9071410944811975989LL;
unsigned long long int var_13 = 17028528831049467983ULL;
unsigned long long int var_17 = 3229231759168384562ULL;
int zero = 0;
short var_18 = (short)22617;
unsigned char var_19 = (unsigned char)1;
unsigned char var_20 = (unsigned char)2;
unsigned short var_21 = (unsigned short)61800;
short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)24324;
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
