#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30397;
unsigned char var_4 = (unsigned char)46;
int var_5 = 1415838845;
int var_9 = -869823393;
unsigned long long int var_12 = 3501870472162256585ULL;
int zero = 0;
unsigned long long int var_16 = 475052555866643505ULL;
unsigned long long int var_17 = 15460342148102153931ULL;
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
