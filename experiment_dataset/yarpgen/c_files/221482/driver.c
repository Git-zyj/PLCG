#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34627;
unsigned int var_3 = 2473017420U;
long long int var_5 = -2204142270307755953LL;
signed char var_9 = (signed char)-6;
unsigned char var_10 = (unsigned char)109;
unsigned int var_11 = 1736764317U;
unsigned int var_14 = 827705620U;
unsigned int var_15 = 926293296U;
int var_16 = 1199343004;
int zero = 0;
long long int var_18 = -5238194342141970231LL;
signed char var_19 = (signed char)28;
long long int var_20 = 2472543461006704675LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
