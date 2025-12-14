#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
unsigned char var_5 = (unsigned char)222;
unsigned char var_9 = (unsigned char)93;
unsigned char var_11 = (unsigned char)135;
unsigned char var_12 = (unsigned char)248;
int zero = 0;
int var_14 = -426050986;
long long int var_15 = 8799049917907153077LL;
void init() {
}

void checksum() {
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
