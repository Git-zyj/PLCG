#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1144369468;
long long int var_9 = 7657711214314229412LL;
unsigned long long int var_11 = 6028217932214065996ULL;
unsigned int var_15 = 3263615889U;
int var_16 = -755525330;
int zero = 0;
unsigned int var_18 = 3436348097U;
short var_19 = (short)23148;
unsigned int var_20 = 1630730876U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
