#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13162753241561797418ULL;
int var_3 = 1472747389;
int var_6 = -70500542;
signed char var_10 = (signed char)-62;
int var_11 = 1280730696;
int zero = 0;
int var_12 = 584223308;
unsigned long long int var_13 = 1426734326765394901ULL;
int var_14 = -1244154852;
unsigned char var_15 = (unsigned char)122;
short var_16 = (short)20364;
unsigned char var_17 = (unsigned char)160;
unsigned char var_18 = (unsigned char)71;
unsigned short arr_13 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)47233 : (unsigned short)19657;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
