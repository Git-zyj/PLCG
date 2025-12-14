#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2859495019U;
unsigned short var_4 = (unsigned short)51188;
unsigned short var_5 = (unsigned short)2665;
unsigned int var_9 = 2000988394U;
int zero = 0;
unsigned int var_12 = 2907486332U;
unsigned int var_13 = 406681164U;
unsigned short var_14 = (unsigned short)6063;
unsigned short var_15 = (unsigned short)42015;
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
