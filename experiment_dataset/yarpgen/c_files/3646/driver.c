#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8939;
short var_1 = (short)21275;
unsigned short var_2 = (unsigned short)48470;
int var_3 = -1819334266;
short var_5 = (short)18318;
long long int var_6 = 1357568238332728628LL;
_Bool var_7 = (_Bool)0;
int var_9 = 594343301;
_Bool var_12 = (_Bool)1;
int var_14 = 118855859;
unsigned long long int var_15 = 9898338744775447177ULL;
int zero = 0;
unsigned long long int var_17 = 15721389198156452783ULL;
unsigned char var_18 = (unsigned char)94;
short var_19 = (short)7851;
void init() {
}

void checksum() {
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
