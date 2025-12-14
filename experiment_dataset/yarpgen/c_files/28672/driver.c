#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 2868149060U;
unsigned long long int var_15 = 11281615651132376502ULL;
long long int var_16 = 4080285808281230840LL;
unsigned int var_18 = 1940571293U;
int zero = 0;
int var_19 = 126877255;
signed char var_20 = (signed char)66;
unsigned long long int var_21 = 14410168533179002785ULL;
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
