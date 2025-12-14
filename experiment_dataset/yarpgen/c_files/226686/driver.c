#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)150;
unsigned int var_9 = 615876684U;
signed char var_10 = (signed char)119;
short var_11 = (short)-8073;
int zero = 0;
unsigned char var_12 = (unsigned char)2;
signed char var_13 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
