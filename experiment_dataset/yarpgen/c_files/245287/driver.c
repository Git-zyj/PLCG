#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62123;
unsigned int var_4 = 707819497U;
signed char var_10 = (signed char)78;
int zero = 0;
short var_13 = (short)10045;
unsigned short var_14 = (unsigned short)39179;
short var_15 = (short)-19763;
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
