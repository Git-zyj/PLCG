#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1241800283324085120LL;
unsigned short var_4 = (unsigned short)45463;
long long int var_10 = 4984302624519160982LL;
unsigned short var_13 = (unsigned short)50323;
unsigned short var_15 = (unsigned short)33875;
int zero = 0;
unsigned short var_16 = (unsigned short)44231;
unsigned short var_17 = (unsigned short)15165;
long long int var_18 = 4005603136689143797LL;
long long int var_19 = 5254512696697629470LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
