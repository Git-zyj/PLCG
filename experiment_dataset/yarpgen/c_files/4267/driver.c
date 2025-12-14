#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1206773884U;
unsigned int var_6 = 1097145U;
unsigned int var_7 = 2728284312U;
unsigned int var_12 = 4166046096U;
unsigned int var_13 = 3608340084U;
int zero = 0;
unsigned int var_15 = 2303189863U;
unsigned int var_16 = 3210622033U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
