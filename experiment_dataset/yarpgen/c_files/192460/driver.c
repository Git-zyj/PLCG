#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62845;
unsigned int var_9 = 2676503267U;
unsigned short var_11 = (unsigned short)45706;
unsigned int var_13 = 1005634451U;
unsigned short var_16 = (unsigned short)26972;
int zero = 0;
int var_17 = 1179734302;
signed char var_18 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
