#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3790956053U;
short var_9 = (short)13366;
unsigned int var_10 = 1132475913U;
int var_14 = -1843873574;
signed char var_16 = (signed char)77;
int zero = 0;
short var_17 = (short)-7072;
unsigned long long int var_18 = 10487924965367665972ULL;
int var_19 = 1453582892;
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
