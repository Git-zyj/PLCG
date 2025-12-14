#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1453235612;
signed char var_1 = (signed char)112;
long long int var_2 = 8149309796030548030LL;
unsigned short var_4 = (unsigned short)25215;
unsigned long long int var_6 = 2430907684900289435ULL;
unsigned int var_9 = 2879773747U;
unsigned char var_11 = (unsigned char)75;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1721816324U;
unsigned char var_14 = (unsigned char)84;
long long int var_15 = 6879301967756294371LL;
unsigned int var_16 = 1166776198U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
