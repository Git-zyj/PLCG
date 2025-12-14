#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26575;
unsigned short var_3 = (unsigned short)53910;
unsigned short var_5 = (unsigned short)1506;
unsigned short var_6 = (unsigned short)59456;
unsigned long long int var_7 = 1993229758435954209ULL;
unsigned long long int var_8 = 4245019624164340290ULL;
int zero = 0;
unsigned long long int var_11 = 4847760966636004043ULL;
unsigned long long int var_12 = 10664965402624769488ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
