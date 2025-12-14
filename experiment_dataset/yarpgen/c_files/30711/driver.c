#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2126582655655714368ULL;
unsigned char var_2 = (unsigned char)189;
int var_4 = -709228700;
signed char var_5 = (signed char)94;
unsigned short var_6 = (unsigned short)49544;
unsigned int var_7 = 240244010U;
unsigned int var_10 = 3170457880U;
int var_11 = -873595760;
unsigned char var_13 = (unsigned char)233;
long long int var_15 = 7313103149144206933LL;
signed char var_17 = (signed char)60;
int zero = 0;
short var_18 = (short)3894;
unsigned int var_19 = 1975164166U;
unsigned short var_20 = (unsigned short)27757;
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
