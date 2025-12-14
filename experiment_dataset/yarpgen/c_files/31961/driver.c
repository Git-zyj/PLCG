#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3311394482U;
unsigned long long int var_1 = 3210312326718316888ULL;
unsigned long long int var_3 = 14619457621843433652ULL;
unsigned long long int var_4 = 9465413259408070357ULL;
short var_5 = (short)-14323;
unsigned char var_6 = (unsigned char)45;
unsigned long long int var_7 = 8762002350924488201ULL;
unsigned long long int var_9 = 5197757476691607240ULL;
unsigned long long int var_10 = 11519020178201963ULL;
int zero = 0;
unsigned long long int var_11 = 1019780063270805552ULL;
unsigned long long int var_12 = 8226169177678463968ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
