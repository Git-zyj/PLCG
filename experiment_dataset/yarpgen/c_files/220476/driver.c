#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14950586385774790771ULL;
long long int var_4 = -7538579707521726536LL;
unsigned int var_15 = 3788907979U;
int zero = 0;
unsigned char var_20 = (unsigned char)81;
long long int var_21 = 6150687723934271220LL;
unsigned long long int var_22 = 5862617131762396635ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
