#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
signed char var_1 = (signed char)116;
unsigned short var_14 = (unsigned short)48877;
unsigned int var_15 = 952417155U;
int var_16 = -5386485;
int zero = 0;
unsigned char var_19 = (unsigned char)237;
unsigned char var_20 = (unsigned char)103;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
