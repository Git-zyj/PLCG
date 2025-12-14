#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)43519;
long long int var_7 = 4358113853500083871LL;
int var_8 = -112980674;
unsigned short var_10 = (unsigned short)51796;
int zero = 0;
long long int var_16 = -5290469216917808214LL;
int var_17 = -1978506811;
long long int var_18 = 8989961325401181438LL;
short var_19 = (short)20985;
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
