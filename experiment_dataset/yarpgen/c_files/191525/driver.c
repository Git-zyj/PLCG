#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1871635007383406057LL;
unsigned short var_8 = (unsigned short)18724;
short var_9 = (short)-16724;
unsigned short var_11 = (unsigned short)58264;
short var_12 = (short)-14878;
int zero = 0;
int var_15 = 997894271;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 8885396672311262781LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
