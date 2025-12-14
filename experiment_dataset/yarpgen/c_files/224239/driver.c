#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5832442442356681714LL;
short var_2 = (short)17352;
int var_10 = -1624587096;
unsigned char var_11 = (unsigned char)17;
int zero = 0;
unsigned char var_18 = (unsigned char)178;
unsigned int var_19 = 691039066U;
void init() {
}

void checksum() {
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
