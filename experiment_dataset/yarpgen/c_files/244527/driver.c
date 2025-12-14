#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)-49;
unsigned long long int var_5 = 4942362854230447261ULL;
long long int var_8 = -4241188202831296597LL;
unsigned int var_9 = 747409394U;
long long int var_10 = 967217319399348381LL;
long long int var_12 = 5300059619033363779LL;
unsigned short var_18 = (unsigned short)8846;
unsigned long long int var_19 = 474518572252536415ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)48820;
unsigned long long int var_21 = 11659193254877886496ULL;
int var_22 = -1580379305;
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
