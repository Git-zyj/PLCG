#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51969;
unsigned int var_1 = 1901010097U;
unsigned char var_2 = (unsigned char)124;
signed char var_3 = (signed char)11;
int var_4 = -1666948757;
int var_6 = 2083708544;
unsigned char var_7 = (unsigned char)6;
long long int var_9 = 5372643233051195250LL;
unsigned char var_10 = (unsigned char)127;
int var_12 = 1165514421;
unsigned long long int var_13 = 586294895872061537ULL;
unsigned int var_14 = 2083519599U;
long long int var_15 = -4701488977865259453LL;
int zero = 0;
unsigned long long int var_17 = 930628273347914362ULL;
short var_18 = (short)-19226;
unsigned char var_19 = (unsigned char)191;
unsigned long long int var_20 = 9631213341734425334ULL;
unsigned long long int var_21 = 12723785393886021767ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
