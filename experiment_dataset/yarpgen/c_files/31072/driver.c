#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
short var_3 = (short)21098;
unsigned long long int var_4 = 5401810814575392510ULL;
long long int var_6 = 331802505213238370LL;
long long int var_7 = -7634895725673135497LL;
unsigned long long int var_8 = 8663839314159467995ULL;
signed char var_9 = (signed char)103;
short var_10 = (short)23359;
int zero = 0;
unsigned long long int var_11 = 4843761888998174392ULL;
int var_12 = -245978504;
unsigned short var_13 = (unsigned short)54898;
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
