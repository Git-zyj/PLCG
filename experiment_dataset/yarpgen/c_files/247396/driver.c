#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 15481954;
unsigned int var_11 = 384790245U;
int var_13 = -135019644;
int var_15 = 1626958457;
signed char var_16 = (signed char)-95;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)20;
int var_20 = 1695296391;
long long int var_21 = 7577843924315450951LL;
signed char var_22 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
