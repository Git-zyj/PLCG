#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -879922619;
short var_7 = (short)-31791;
unsigned char var_11 = (unsigned char)93;
int zero = 0;
int var_16 = 416094139;
long long int var_17 = -6307471622699266865LL;
int var_18 = 557719917;
short var_19 = (short)-17972;
void init() {
}

void checksum() {
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
