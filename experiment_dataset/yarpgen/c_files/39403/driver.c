#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11753672443487103571ULL;
signed char var_8 = (signed char)88;
unsigned char var_9 = (unsigned char)237;
int var_12 = 1198259529;
long long int var_13 = 8446157537961749926LL;
int zero = 0;
long long int var_15 = -8065825137771641225LL;
signed char var_16 = (signed char)-86;
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
