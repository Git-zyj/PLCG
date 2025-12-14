#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7450637768037242379LL;
long long int var_3 = 2605119748410689512LL;
short var_6 = (short)17320;
short var_11 = (short)657;
unsigned short var_13 = (unsigned short)51007;
int zero = 0;
short var_14 = (short)-29939;
long long int var_15 = -4416785831842720900LL;
int var_16 = 2006258587;
long long int var_17 = -3917574801978421055LL;
unsigned long long int var_18 = 3281661024490521582ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
