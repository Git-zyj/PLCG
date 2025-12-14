#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4403759058993273869ULL;
unsigned char var_4 = (unsigned char)218;
int var_10 = 688390341;
int var_11 = -2100827675;
long long int var_12 = 2784279042443483171LL;
int zero = 0;
short var_13 = (short)-30741;
_Bool var_14 = (_Bool)0;
long long int var_15 = 8772724052009555123LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
