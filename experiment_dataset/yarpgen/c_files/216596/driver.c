#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3597097826U;
int var_4 = 222197963;
unsigned int var_7 = 2548589951U;
int var_8 = -371892166;
signed char var_18 = (signed char)24;
int zero = 0;
unsigned char var_19 = (unsigned char)140;
signed char var_20 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
