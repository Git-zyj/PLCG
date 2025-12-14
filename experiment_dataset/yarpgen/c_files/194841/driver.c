#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)2505;
unsigned long long int var_6 = 4000229078938068702ULL;
short var_8 = (short)-26742;
unsigned long long int var_10 = 13525319718338381768ULL;
short var_15 = (short)-30520;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)10729;
short var_20 = (short)32390;
_Bool var_21 = (_Bool)0;
short var_22 = (short)22795;
short var_23 = (short)11523;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
