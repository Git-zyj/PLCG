#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8623283518604876089LL;
unsigned short var_6 = (unsigned short)694;
int var_8 = -803500171;
unsigned short var_9 = (unsigned short)40079;
int zero = 0;
unsigned int var_11 = 2548707465U;
long long int var_12 = -5088738322187284772LL;
unsigned char var_13 = (unsigned char)213;
int var_14 = 1489461987;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
