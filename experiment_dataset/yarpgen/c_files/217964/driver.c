#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 522776610U;
short var_3 = (short)-17344;
unsigned short var_7 = (unsigned short)3601;
long long int var_12 = 6940231239393771899LL;
unsigned short var_13 = (unsigned short)33152;
unsigned short var_14 = (unsigned short)54873;
int zero = 0;
long long int var_16 = -159625273671428606LL;
unsigned long long int var_17 = 1676405237949189976ULL;
unsigned long long int var_18 = 12354801089006244990ULL;
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
