#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1929194643U;
unsigned char var_10 = (unsigned char)9;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -6941381371879805146LL;
unsigned int var_15 = 3165697561U;
signed char var_16 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
