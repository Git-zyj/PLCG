#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6962883040627281382ULL;
unsigned short var_8 = (unsigned short)51361;
short var_11 = (short)-26507;
int zero = 0;
unsigned short var_15 = (unsigned short)42083;
unsigned short var_16 = (unsigned short)3282;
unsigned long long int var_17 = 2628880540079200697ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
