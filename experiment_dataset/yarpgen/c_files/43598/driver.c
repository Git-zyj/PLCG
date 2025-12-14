#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7725823522614202731LL;
short var_11 = (short)14231;
short var_14 = (short)8465;
int zero = 0;
long long int var_17 = 6591908654619659948LL;
unsigned short var_18 = (unsigned short)9976;
unsigned short var_19 = (unsigned short)26525;
void init() {
}

void checksum() {
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
