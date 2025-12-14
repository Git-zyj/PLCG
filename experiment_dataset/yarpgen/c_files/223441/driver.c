#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -21418736;
short var_2 = (short)-32451;
short var_3 = (short)-17953;
unsigned short var_4 = (unsigned short)47563;
unsigned long long int var_5 = 10573511838292627391ULL;
long long int var_6 = 8864214639802098755LL;
int zero = 0;
long long int var_11 = 7197465441564440016LL;
unsigned int var_12 = 1742827039U;
unsigned int var_13 = 1923963434U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
