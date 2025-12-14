#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1191468217;
unsigned long long int var_1 = 9175871141802038183ULL;
signed char var_3 = (signed char)58;
unsigned long long int var_5 = 13210112917060350095ULL;
unsigned int var_6 = 2322662820U;
unsigned int var_8 = 2848108467U;
signed char var_9 = (signed char)-36;
unsigned int var_13 = 2594510027U;
unsigned int var_14 = 3117892928U;
int zero = 0;
int var_19 = -2078935253;
unsigned short var_20 = (unsigned short)16923;
unsigned long long int var_21 = 12522856383034042973ULL;
void init() {
}

void checksum() {
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
