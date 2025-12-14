#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22503;
unsigned long long int var_8 = 17996785610385804006ULL;
short var_9 = (short)15537;
int var_10 = 1442409199;
unsigned long long int var_12 = 8667366159183460042ULL;
unsigned char var_15 = (unsigned char)17;
int zero = 0;
unsigned char var_16 = (unsigned char)71;
int var_17 = 1763565746;
void init() {
}

void checksum() {
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
