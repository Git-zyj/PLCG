#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1318524790U;
long long int var_6 = -5907104440167188761LL;
unsigned long long int var_7 = 13017527555261441924ULL;
long long int var_11 = -4227890136954512726LL;
int zero = 0;
unsigned char var_17 = (unsigned char)251;
int var_18 = 383732677;
void init() {
}

void checksum() {
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
