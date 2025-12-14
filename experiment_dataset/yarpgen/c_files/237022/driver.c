#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12131555541405309134ULL;
int var_3 = 1271621473;
int var_6 = 1795722520;
unsigned short var_8 = (unsigned short)6299;
unsigned long long int var_10 = 6251435406612355287ULL;
int zero = 0;
unsigned long long int var_13 = 18056024486912509556ULL;
unsigned long long int var_14 = 13132812910352678108ULL;
long long int var_15 = -5448551875772275674LL;
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
