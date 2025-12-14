#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)124;
signed char var_5 = (signed char)87;
unsigned char var_6 = (unsigned char)88;
signed char var_7 = (signed char)86;
long long int var_8 = -6643515645544012196LL;
long long int var_11 = -6048065274258507230LL;
int zero = 0;
signed char var_14 = (signed char)127;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-24591;
short var_17 = (short)9508;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
