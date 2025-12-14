#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2838844646441762287LL;
short var_3 = (short)-4308;
_Bool var_4 = (_Bool)0;
short var_9 = (short)25687;
long long int var_11 = 8644742123582184276LL;
int var_13 = 1746122145;
short var_14 = (short)30871;
int zero = 0;
short var_16 = (short)-9004;
short var_17 = (short)31293;
long long int var_18 = 4521635492252318585LL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)3278;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
