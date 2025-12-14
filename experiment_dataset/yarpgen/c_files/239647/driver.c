#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4311382496052936577LL;
unsigned long long int var_3 = 28848338879147626ULL;
signed char var_5 = (signed char)21;
long long int var_9 = 3159016236817844336LL;
long long int var_10 = 8532535606336769658LL;
int zero = 0;
unsigned long long int var_13 = 13836097630570201998ULL;
signed char var_14 = (signed char)-98;
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
