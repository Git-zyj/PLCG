#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21423;
unsigned short var_6 = (unsigned short)2075;
unsigned char var_9 = (unsigned char)103;
unsigned char var_13 = (unsigned char)42;
unsigned char var_14 = (unsigned char)35;
int zero = 0;
unsigned char var_16 = (unsigned char)77;
unsigned short var_17 = (unsigned short)7289;
int var_18 = -733774683;
long long int var_19 = 1447379356261720873LL;
short var_20 = (short)-15150;
int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 1200757459;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
