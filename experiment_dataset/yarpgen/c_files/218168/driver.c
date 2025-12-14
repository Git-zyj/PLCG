#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13422413066749725017ULL;
unsigned int var_5 = 2825385525U;
unsigned long long int var_6 = 18418292489609929854ULL;
unsigned long long int var_8 = 9046232927678488614ULL;
unsigned short var_10 = (unsigned short)4683;
long long int var_12 = -6583861799569813356LL;
int zero = 0;
unsigned long long int var_13 = 8271785076075579901ULL;
unsigned long long int var_14 = 14931148283458657771ULL;
unsigned long long int var_15 = 13214967863616200922ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
