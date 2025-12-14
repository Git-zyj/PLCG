#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_7 = 17413279382588866556ULL;
unsigned long long int var_18 = 8877663206624025086ULL;
int zero = 0;
unsigned long long int var_20 = 5114668910936151788ULL;
unsigned long long int var_21 = 6647474002711950178ULL;
short var_22 = (short)31816;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
