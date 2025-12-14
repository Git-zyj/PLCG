#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10886942091955885704ULL;
signed char var_8 = (signed char)-115;
int var_9 = 1986520708;
int var_11 = 406495711;
int zero = 0;
long long int var_13 = -4209038868063674457LL;
unsigned long long int var_14 = 8664513347440949635ULL;
void init() {
}

void checksum() {
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
