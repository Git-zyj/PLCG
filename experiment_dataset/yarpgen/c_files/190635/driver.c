#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 781377802006762556LL;
signed char var_7 = (signed char)58;
int zero = 0;
long long int var_13 = -968035328757384726LL;
unsigned int var_14 = 923483680U;
unsigned long long int var_15 = 15558761073034632405ULL;
unsigned long long int var_16 = 10732724890001114548ULL;
short var_17 = (short)-19236;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
