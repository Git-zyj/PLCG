#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)99;
signed char var_7 = (signed char)10;
short var_8 = (short)14147;
signed char var_9 = (signed char)9;
signed char var_11 = (signed char)72;
int zero = 0;
signed char var_13 = (signed char)-25;
signed char var_14 = (signed char)73;
signed char var_15 = (signed char)4;
unsigned int var_16 = 2550570069U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
