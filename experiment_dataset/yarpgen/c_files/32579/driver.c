#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29956;
unsigned int var_4 = 3788222142U;
unsigned long long int var_6 = 6916819850287597800ULL;
_Bool var_9 = (_Bool)0;
int var_10 = 1632801528;
int var_11 = 472821525;
int zero = 0;
unsigned short var_14 = (unsigned short)43190;
signed char var_15 = (signed char)57;
short var_16 = (short)11375;
unsigned long long int var_17 = 2610984452934705407ULL;
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
