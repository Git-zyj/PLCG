#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2966273744U;
unsigned short var_5 = (unsigned short)50647;
long long int var_8 = 7769507715178927412LL;
int var_9 = 495220639;
unsigned int var_10 = 3402537484U;
unsigned char var_11 = (unsigned char)185;
int var_13 = -317411669;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)7696;
long long int var_16 = -105925648874145968LL;
int var_17 = -1756094763;
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
