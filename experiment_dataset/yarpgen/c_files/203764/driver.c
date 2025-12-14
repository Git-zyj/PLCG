#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2451261246345333156ULL;
long long int var_5 = -2110715479918628334LL;
long long int var_11 = -8042977994674206687LL;
int var_12 = -2001553062;
int zero = 0;
unsigned long long int var_18 = 187232909816783165ULL;
short var_19 = (short)29085;
signed char var_20 = (signed char)-87;
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
