#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -204891404;
unsigned char var_5 = (unsigned char)219;
long long int var_8 = 7863935336771101430LL;
unsigned int var_10 = 1791156556U;
int zero = 0;
unsigned int var_12 = 1494935805U;
int var_13 = 473003227;
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
