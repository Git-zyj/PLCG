#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 739671831195901764LL;
signed char var_10 = (signed char)88;
unsigned char var_11 = (unsigned char)142;
long long int var_12 = 8537228774234999129LL;
long long int var_16 = 4825325812547933867LL;
int zero = 0;
signed char var_17 = (signed char)20;
int var_18 = 1537129130;
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
