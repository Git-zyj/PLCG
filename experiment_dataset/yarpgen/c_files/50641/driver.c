#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)39;
unsigned short var_3 = (unsigned short)5587;
long long int var_5 = 6575155988258297121LL;
unsigned char var_11 = (unsigned char)67;
int zero = 0;
unsigned int var_14 = 2559537111U;
unsigned int var_15 = 2098958871U;
void init() {
}

void checksum() {
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
