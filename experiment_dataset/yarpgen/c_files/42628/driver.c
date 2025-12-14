#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
short var_3 = (short)-6361;
int var_6 = -1833182726;
long long int var_7 = -8733031006300977063LL;
int var_10 = 1725658764;
short var_15 = (short)-19672;
int zero = 0;
unsigned int var_16 = 2882103038U;
long long int var_17 = 6504696384019981235LL;
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
