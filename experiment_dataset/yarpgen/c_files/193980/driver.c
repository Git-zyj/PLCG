#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
unsigned short var_1 = (unsigned short)9068;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
long long int var_5 = 845414532935460368LL;
unsigned int var_7 = 1472579605U;
unsigned int var_8 = 2471990004U;
unsigned long long int var_13 = 18135536900388394388ULL;
unsigned short var_15 = (unsigned short)34638;
int zero = 0;
unsigned long long int var_16 = 14239247362233114165ULL;
unsigned long long int var_17 = 17470455332712339642ULL;
unsigned short var_18 = (unsigned short)32410;
short var_19 = (short)29063;
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
