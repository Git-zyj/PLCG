#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 4863049525887693027ULL;
signed char var_15 = (signed char)-75;
int zero = 0;
unsigned long long int var_16 = 4962363053155496199ULL;
long long int var_17 = 5348662006497519574LL;
short var_18 = (short)-6611;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
