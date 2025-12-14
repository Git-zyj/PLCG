#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44847;
int var_1 = -524898065;
short var_9 = (short)-30417;
unsigned long long int var_11 = 9329560643948590778ULL;
unsigned int var_13 = 1827604865U;
int zero = 0;
unsigned char var_15 = (unsigned char)59;
unsigned char var_16 = (unsigned char)67;
unsigned short var_17 = (unsigned short)1396;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
