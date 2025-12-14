#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)184;
int var_6 = -26897824;
unsigned int var_7 = 2221070039U;
long long int var_10 = 147188302111022242LL;
int zero = 0;
unsigned short var_13 = (unsigned short)20948;
unsigned char var_14 = (unsigned char)80;
unsigned short var_15 = (unsigned short)15997;
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
