#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)80;
int var_11 = 2120980165;
signed char var_12 = (signed char)99;
long long int var_14 = -202765485174188158LL;
int zero = 0;
unsigned char var_15 = (unsigned char)141;
long long int var_16 = 4355128115193230632LL;
signed char var_17 = (signed char)63;
unsigned long long int var_18 = 16863891521901703474ULL;
int var_19 = 617045505;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
