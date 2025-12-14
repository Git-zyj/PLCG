#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 1707367631U;
unsigned int var_12 = 2530877353U;
unsigned int var_14 = 939446240U;
int zero = 0;
unsigned char var_18 = (unsigned char)162;
unsigned int var_19 = 2063040619U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
