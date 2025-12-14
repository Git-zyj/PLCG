#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1334429214;
signed char var_5 = (signed char)-22;
unsigned char var_6 = (unsigned char)79;
long long int var_7 = 7104621811913174998LL;
signed char var_9 = (signed char)115;
unsigned char var_10 = (unsigned char)236;
int zero = 0;
signed char var_15 = (signed char)-75;
unsigned long long int var_16 = 8655764020811920319ULL;
long long int var_17 = 9002493938984843389LL;
unsigned int var_18 = 3201742788U;
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
