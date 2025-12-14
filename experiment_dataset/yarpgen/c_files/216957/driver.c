#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4130156220242633045LL;
unsigned int var_1 = 1078712553U;
unsigned int var_3 = 2130099696U;
unsigned int var_5 = 2001743250U;
unsigned char var_8 = (unsigned char)234;
unsigned int var_9 = 3153044538U;
int zero = 0;
unsigned int var_10 = 1082037046U;
unsigned char var_11 = (unsigned char)51;
unsigned int var_12 = 56881179U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
