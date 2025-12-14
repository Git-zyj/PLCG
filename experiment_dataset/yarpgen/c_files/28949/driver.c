#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1795166912;
unsigned short var_9 = (unsigned short)28416;
unsigned long long int var_11 = 9516429150207985632ULL;
int zero = 0;
short var_12 = (short)7117;
int var_13 = 183360998;
short var_14 = (short)-17135;
signed char var_15 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
