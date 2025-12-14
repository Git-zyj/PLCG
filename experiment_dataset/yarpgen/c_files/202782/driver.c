#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 881176237U;
int var_7 = 816202626;
unsigned long long int var_10 = 14245619155309725212ULL;
int zero = 0;
unsigned int var_11 = 1035086337U;
unsigned int var_12 = 419838138U;
unsigned char var_13 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
