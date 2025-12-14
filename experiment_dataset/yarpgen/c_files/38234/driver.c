#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)95;
unsigned int var_10 = 3544438769U;
signed char var_12 = (signed char)-38;
unsigned char var_15 = (unsigned char)232;
signed char var_18 = (signed char)-52;
int zero = 0;
int var_20 = 661017239;
unsigned int var_21 = 1275279035U;
unsigned char var_22 = (unsigned char)154;
int var_23 = 1390196753;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
