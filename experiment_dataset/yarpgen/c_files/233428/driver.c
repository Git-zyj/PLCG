#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6144454137628450693LL;
unsigned long long int var_3 = 4202140889693915104ULL;
long long int var_5 = 8357065489712431020LL;
short var_6 = (short)-19457;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)60838;
short var_10 = (short)15922;
long long int var_11 = 4904792313186986240LL;
unsigned long long int var_16 = 17792524416628626123ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)25160;
unsigned int var_18 = 407854741U;
unsigned long long int var_19 = 3805187388800303056ULL;
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
