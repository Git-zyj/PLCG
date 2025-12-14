#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1418041203;
signed char var_5 = (signed char)-26;
short var_9 = (short)18198;
unsigned char var_17 = (unsigned char)147;
unsigned long long int var_18 = 11917192237572030529ULL;
int zero = 0;
unsigned int var_19 = 1087799127U;
unsigned char var_20 = (unsigned char)7;
unsigned long long int var_21 = 8952694797937280091ULL;
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
