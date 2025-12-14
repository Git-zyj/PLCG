#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)96;
short var_6 = (short)-29655;
unsigned int var_8 = 590013162U;
unsigned long long int var_9 = 17513631116536342596ULL;
int var_10 = -1587521970;
short var_11 = (short)-15338;
signed char var_12 = (signed char)-94;
int zero = 0;
unsigned long long int var_13 = 12523598176137927497ULL;
long long int var_14 = -7488885499183144609LL;
long long int var_15 = 7372214395426801759LL;
unsigned char var_16 = (unsigned char)40;
unsigned int var_17 = 2621059787U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
