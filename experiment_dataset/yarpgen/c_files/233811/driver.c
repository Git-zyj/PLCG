#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1650554204561661677LL;
int var_9 = 820152587;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)56;
unsigned short var_16 = (unsigned short)28075;
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
