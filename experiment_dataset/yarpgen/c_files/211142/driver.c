#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7226259872956779049LL;
unsigned int var_12 = 2960640187U;
long long int var_13 = 1171498757867926215LL;
unsigned short var_14 = (unsigned short)51952;
int zero = 0;
signed char var_18 = (signed char)6;
unsigned long long int var_19 = 71430466663803623ULL;
unsigned int var_20 = 2862426222U;
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
