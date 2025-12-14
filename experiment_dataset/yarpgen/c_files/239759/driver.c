#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)-8890;
unsigned short var_14 = (unsigned short)9447;
long long int var_15 = -7710465643728325831LL;
int zero = 0;
unsigned short var_16 = (unsigned short)131;
unsigned short var_17 = (unsigned short)4057;
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
