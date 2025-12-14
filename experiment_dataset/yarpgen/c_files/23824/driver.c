#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
long long int var_1 = -7777307961856581784LL;
unsigned int var_3 = 466974924U;
long long int var_4 = -6760411079250789473LL;
unsigned long long int var_5 = 9260484898166235305ULL;
unsigned int var_6 = 3970866283U;
unsigned int var_7 = 2372659315U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 5467265900037903278ULL;
int var_10 = 1796647168;
int zero = 0;
long long int var_12 = 2352171364822618913LL;
short var_13 = (short)20947;
signed char var_14 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
