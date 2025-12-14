#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -182150719;
signed char var_3 = (signed char)-57;
int var_11 = -351232254;
long long int var_12 = -6960972690134599430LL;
int zero = 0;
long long int var_14 = 838302081235600180LL;
long long int var_15 = -2209600220679550225LL;
unsigned char var_16 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
