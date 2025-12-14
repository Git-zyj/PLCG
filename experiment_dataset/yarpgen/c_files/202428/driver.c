#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2730915925U;
unsigned int var_1 = 643894977U;
unsigned int var_3 = 1724728249U;
unsigned char var_5 = (unsigned char)45;
signed char var_6 = (signed char)35;
int var_13 = 1009181599;
unsigned int var_15 = 3613762883U;
int zero = 0;
signed char var_18 = (signed char)-70;
int var_19 = 1448182939;
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
