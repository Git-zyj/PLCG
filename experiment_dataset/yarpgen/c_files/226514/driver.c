#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14452879713653594560ULL;
unsigned long long int var_6 = 4385029334859234489ULL;
unsigned char var_8 = (unsigned char)21;
signed char var_9 = (signed char)-14;
int var_10 = -701242927;
int zero = 0;
signed char var_13 = (signed char)71;
unsigned char var_14 = (unsigned char)126;
unsigned char var_15 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
