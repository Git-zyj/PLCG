#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12410912038229725737ULL;
unsigned long long int var_8 = 3854386050467508129ULL;
signed char var_9 = (signed char)32;
unsigned char var_17 = (unsigned char)39;
unsigned long long int var_18 = 14619132996309512563ULL;
signed char var_19 = (signed char)39;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7635618776250301851ULL;
unsigned char var_22 = (unsigned char)13;
short var_23 = (short)1026;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
