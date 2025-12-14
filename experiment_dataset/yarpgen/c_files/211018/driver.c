#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)122;
short var_2 = (short)-18085;
unsigned char var_5 = (unsigned char)78;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)198;
int zero = 0;
long long int var_12 = 5200789194374914957LL;
long long int var_13 = -5259189589036720416LL;
unsigned int var_14 = 921521086U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
