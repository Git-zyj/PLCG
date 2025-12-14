#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)241;
unsigned int var_8 = 1576781343U;
signed char var_9 = (signed char)-87;
int zero = 0;
signed char var_13 = (signed char)-91;
signed char var_14 = (signed char)80;
unsigned int var_15 = 583612913U;
unsigned int var_16 = 2904173526U;
signed char var_17 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
