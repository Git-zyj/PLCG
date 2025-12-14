#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1606721345459762034LL;
unsigned long long int var_2 = 15185026264001440529ULL;
unsigned int var_3 = 2956242564U;
unsigned char var_4 = (unsigned char)82;
signed char var_5 = (signed char)99;
unsigned long long int var_9 = 7306621298032642716ULL;
unsigned short var_13 = (unsigned short)38509;
short var_14 = (short)-24819;
int zero = 0;
short var_15 = (short)-95;
unsigned long long int var_16 = 12328079336568110457ULL;
int var_17 = -2015434423;
signed char var_18 = (signed char)-18;
void init() {
}

void checksum() {
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
