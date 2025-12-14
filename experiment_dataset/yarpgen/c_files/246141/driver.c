#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 856650273;
short var_3 = (short)2688;
unsigned int var_4 = 729020207U;
int var_7 = 252646709;
int var_9 = 950488175;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_16 = -454803339;
unsigned int var_17 = 2315994008U;
int var_18 = -947178674;
short var_19 = (short)17367;
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
