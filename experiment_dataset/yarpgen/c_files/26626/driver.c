#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 1270757468551733200ULL;
short var_11 = (short)-19463;
short var_12 = (short)21138;
int zero = 0;
unsigned long long int var_18 = 10812437682826025689ULL;
short var_19 = (short)4973;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
