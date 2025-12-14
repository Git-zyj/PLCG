#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1489659352;
int var_10 = -1582067070;
long long int var_13 = -9109766301469509196LL;
long long int var_18 = -6586847117751479982LL;
int zero = 0;
signed char var_19 = (signed char)113;
unsigned short var_20 = (unsigned short)56563;
long long int var_21 = -2422920902302326675LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
