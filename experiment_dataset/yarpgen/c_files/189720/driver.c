#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1658118386;
int var_4 = -554489137;
int var_7 = 117772102;
int var_9 = 824322959;
long long int var_10 = -3570390602867278336LL;
unsigned char var_13 = (unsigned char)10;
int zero = 0;
int var_14 = -2113594230;
int var_15 = -1623121451;
long long int var_16 = 8824130198771894140LL;
int var_17 = -304557558;
unsigned char var_18 = (unsigned char)239;
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
