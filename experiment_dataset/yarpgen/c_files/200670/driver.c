#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1665553466U;
unsigned int var_6 = 2327239448U;
unsigned long long int var_8 = 12613336945472864915ULL;
short var_11 = (short)-13904;
unsigned long long int var_13 = 10158426461892228126ULL;
int zero = 0;
unsigned int var_14 = 283330606U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
