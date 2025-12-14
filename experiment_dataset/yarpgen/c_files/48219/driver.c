#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 403601018U;
unsigned int var_6 = 4007195771U;
long long int var_9 = -2547025098474689825LL;
unsigned short var_10 = (unsigned short)37716;
int zero = 0;
unsigned int var_12 = 4083334350U;
unsigned int var_13 = 2269930774U;
unsigned int var_14 = 2659791733U;
unsigned char var_15 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
