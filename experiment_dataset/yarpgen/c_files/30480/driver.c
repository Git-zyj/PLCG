#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-84;
unsigned int var_6 = 568144775U;
short var_7 = (short)-17470;
signed char var_13 = (signed char)63;
int zero = 0;
unsigned int var_15 = 648318140U;
signed char var_16 = (signed char)52;
void init() {
}

void checksum() {
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
