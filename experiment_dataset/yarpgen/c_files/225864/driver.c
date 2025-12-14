#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3052071347642729151ULL;
unsigned short var_3 = (unsigned short)38452;
unsigned long long int var_6 = 1384788365600488988ULL;
unsigned long long int var_9 = 2128025079782091714ULL;
unsigned long long int var_12 = 14241983585984469319ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)26903;
unsigned short var_17 = (unsigned short)29857;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
