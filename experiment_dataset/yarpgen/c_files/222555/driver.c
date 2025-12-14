#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21867;
short var_2 = (short)-9315;
int var_12 = 555912241;
short var_14 = (short)-30540;
unsigned int var_15 = 2424423838U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 2101168012U;
long long int var_20 = 1215690875960980737LL;
unsigned long long int var_21 = 3224556610189541294ULL;
int var_22 = -1080113243;
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
