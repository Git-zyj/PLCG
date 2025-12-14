#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1563596753;
signed char var_9 = (signed char)95;
int var_15 = -1961679886;
int zero = 0;
int var_18 = -505747982;
unsigned char var_19 = (unsigned char)30;
unsigned short var_20 = (unsigned short)35500;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
