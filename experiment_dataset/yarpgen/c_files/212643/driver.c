#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)140;
unsigned short var_9 = (unsigned short)32672;
unsigned int var_10 = 3675398967U;
signed char var_11 = (signed char)35;
int var_17 = -1463190564;
unsigned int var_18 = 1528864517U;
int zero = 0;
unsigned short var_19 = (unsigned short)28959;
short var_20 = (short)9848;
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
