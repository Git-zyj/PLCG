#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12589;
unsigned long long int var_3 = 2995436154050984991ULL;
unsigned long long int var_4 = 1676373379442352307ULL;
unsigned long long int var_6 = 6797748819658541427ULL;
signed char var_8 = (signed char)-68;
short var_10 = (short)3972;
short var_11 = (short)2943;
int zero = 0;
signed char var_12 = (signed char)-28;
unsigned long long int var_13 = 17393719573169262157ULL;
short var_14 = (short)-4309;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
