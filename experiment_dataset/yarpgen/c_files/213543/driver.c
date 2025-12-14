#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-23;
long long int var_7 = -8230130596978074792LL;
unsigned short var_13 = (unsigned short)30350;
int zero = 0;
unsigned int var_15 = 364869995U;
long long int var_16 = 439223599670320744LL;
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
