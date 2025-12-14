#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13517;
signed char var_1 = (signed char)75;
short var_3 = (short)-696;
long long int var_4 = -6163413335323035681LL;
unsigned int var_6 = 375380814U;
unsigned char var_7 = (unsigned char)113;
unsigned int var_9 = 3551391165U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 17713407620241815918ULL;
long long int var_12 = 4555165186008113053LL;
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
