#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12935304333795942301ULL;
signed char var_7 = (signed char)-14;
unsigned long long int var_15 = 13238938573893725716ULL;
int zero = 0;
unsigned long long int var_18 = 14498187825745838564ULL;
signed char var_19 = (signed char)20;
signed char var_20 = (signed char)96;
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
