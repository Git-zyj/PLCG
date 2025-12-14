#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)250;
_Bool var_9 = (_Bool)1;
unsigned int var_13 = 4052146444U;
signed char var_17 = (signed char)79;
unsigned char var_18 = (unsigned char)24;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2501652330U;
unsigned int var_21 = 204206982U;
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
