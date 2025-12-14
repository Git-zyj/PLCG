#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8125;
unsigned long long int var_2 = 14122137144324167927ULL;
unsigned int var_3 = 2214571430U;
long long int var_4 = 1695331639397720262LL;
unsigned int var_5 = 2549958889U;
short var_6 = (short)20504;
int var_7 = 170529348;
unsigned long long int var_8 = 11773091207982976340ULL;
unsigned long long int var_9 = 15932005706430873470ULL;
int zero = 0;
unsigned int var_10 = 1547840943U;
unsigned long long int var_11 = 15872588254462892704ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
