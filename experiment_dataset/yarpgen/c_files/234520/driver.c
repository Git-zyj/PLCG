#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8781138667796735581LL;
unsigned long long int var_12 = 7290631948571505548ULL;
int zero = 0;
short var_18 = (short)-5710;
unsigned int var_19 = 2665082579U;
long long int var_20 = -4581347279735930843LL;
int var_21 = 665770300;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
