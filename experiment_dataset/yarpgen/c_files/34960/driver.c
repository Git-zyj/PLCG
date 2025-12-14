#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
unsigned char var_4 = (unsigned char)125;
unsigned char var_7 = (unsigned char)209;
long long int var_12 = -1343644819091580260LL;
short var_14 = (short)-12560;
int zero = 0;
long long int var_16 = 7263876623999353036LL;
short var_17 = (short)-2339;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
