#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)71;
unsigned long long int var_6 = 10151932519366856899ULL;
int var_9 = -923248870;
int var_13 = -1909838260;
int zero = 0;
unsigned int var_16 = 530418811U;
unsigned int var_17 = 3468475141U;
short var_18 = (short)25781;
void init() {
}

void checksum() {
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
