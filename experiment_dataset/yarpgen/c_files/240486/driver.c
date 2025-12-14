#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6605;
unsigned short var_5 = (unsigned short)786;
short var_6 = (short)19755;
int zero = 0;
unsigned short var_20 = (unsigned short)13759;
unsigned short var_21 = (unsigned short)8127;
long long int var_22 = 6861399756348727264LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
