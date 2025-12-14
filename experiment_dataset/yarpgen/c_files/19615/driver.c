#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18085;
short var_1 = (short)22085;
long long int var_8 = -2799361617940194917LL;
long long int var_10 = 5633321650461316895LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_16 = (short)-4392;
unsigned long long int var_17 = 3313330327354895330ULL;
unsigned long long int var_18 = 14247953200820849688ULL;
long long int var_19 = -760951583472522558LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
