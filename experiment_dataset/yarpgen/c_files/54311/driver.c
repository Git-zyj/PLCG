#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-12;
unsigned int var_5 = 1681239778U;
unsigned char var_12 = (unsigned char)15;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = -8681375475643927196LL;
signed char var_16 = (signed char)-3;
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
