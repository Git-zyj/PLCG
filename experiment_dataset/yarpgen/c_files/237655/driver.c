#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 1508399588544205104ULL;
unsigned int var_5 = 2736450863U;
unsigned int var_6 = 768824710U;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)89;
int zero = 0;
unsigned int var_16 = 4066054542U;
unsigned int var_17 = 1269841386U;
_Bool var_18 = (_Bool)1;
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
