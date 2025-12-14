#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
long long int var_4 = -1060823342067075592LL;
short var_7 = (short)-10423;
short var_11 = (short)-9405;
int zero = 0;
unsigned char var_12 = (unsigned char)240;
int var_13 = -1472115040;
short var_14 = (short)13446;
unsigned char var_15 = (unsigned char)250;
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
