#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
long long int var_1 = -8338554050953737952LL;
signed char var_4 = (signed char)25;
short var_5 = (short)-2748;
unsigned long long int var_6 = 8862424421038471199ULL;
long long int var_7 = 1883405040117130609LL;
unsigned long long int var_8 = 13374042945665022567ULL;
signed char var_9 = (signed char)28;
short var_10 = (short)-19318;
unsigned short var_12 = (unsigned short)10730;
short var_13 = (short)-26702;
int zero = 0;
int var_14 = 1656715408;
short var_15 = (short)18754;
short var_16 = (short)-8323;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
