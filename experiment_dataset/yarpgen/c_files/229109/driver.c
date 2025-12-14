#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3997750320159181636LL;
int var_4 = -1003769256;
unsigned int var_6 = 369446576U;
unsigned char var_12 = (unsigned char)194;
int zero = 0;
short var_13 = (short)-25012;
short var_14 = (short)-31455;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
