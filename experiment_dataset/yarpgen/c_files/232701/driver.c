#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 617017352873813482LL;
unsigned short var_9 = (unsigned short)9672;
unsigned long long int var_12 = 14597987263355120368ULL;
_Bool var_14 = (_Bool)0;
short var_17 = (short)-14583;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 6697641357881745617ULL;
int var_22 = -1755754747;
void init() {
}

void checksum() {
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
