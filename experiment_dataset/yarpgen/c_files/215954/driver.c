#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16950910999035829984ULL;
short var_8 = (short)2661;
unsigned short var_12 = (unsigned short)20647;
signed char var_13 = (signed char)54;
int var_16 = -653755299;
int zero = 0;
unsigned int var_20 = 689710848U;
signed char var_21 = (signed char)64;
long long int var_22 = 8721972584486458399LL;
unsigned long long int var_23 = 5120711099173154674ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
