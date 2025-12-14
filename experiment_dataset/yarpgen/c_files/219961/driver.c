#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10516052677111202343ULL;
short var_1 = (short)15282;
int zero = 0;
unsigned int var_10 = 1442681299U;
unsigned long long int var_11 = 11296240476870469621ULL;
unsigned long long int var_12 = 10969209304532029479ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
