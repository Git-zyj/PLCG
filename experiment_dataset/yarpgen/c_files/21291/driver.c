#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
short var_1 = (short)-2570;
unsigned char var_11 = (unsigned char)231;
int zero = 0;
long long int var_12 = -6115708441526259391LL;
signed char var_13 = (signed char)-81;
unsigned int var_14 = 3488716664U;
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
