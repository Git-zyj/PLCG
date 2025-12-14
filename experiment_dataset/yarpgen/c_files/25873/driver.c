#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6642563871675772821LL;
short var_2 = (short)16546;
long long int var_3 = 2297193967628499146LL;
long long int var_7 = -1686523276032456573LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -7790852520161145477LL;
long long int var_10 = -4678472029889794976LL;
short var_11 = (short)-12649;
short var_12 = (short)26541;
unsigned long long int var_13 = 9203925545366848277ULL;
unsigned long long int var_14 = 13911662171494328947ULL;
int zero = 0;
short var_16 = (short)-14499;
short var_17 = (short)4482;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-22279;
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
