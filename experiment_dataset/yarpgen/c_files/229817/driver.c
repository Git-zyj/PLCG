#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49529;
int var_3 = 1597380323;
int var_7 = 1328070548;
int var_8 = 702419637;
unsigned long long int var_9 = 10960435533989539548ULL;
long long int var_10 = 990322977408366833LL;
int zero = 0;
signed char var_11 = (signed char)-114;
signed char var_12 = (signed char)-86;
unsigned int var_13 = 1898088807U;
unsigned char var_14 = (unsigned char)38;
unsigned char var_15 = (unsigned char)96;
void init() {
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
