#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
unsigned long long int var_1 = 18079583878822085979ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)187;
long long int var_15 = -8146002771919960818LL;
long long int var_16 = 5686252271482056702LL;
unsigned char var_17 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
