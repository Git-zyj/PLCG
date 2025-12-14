#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64420;
signed char var_10 = (signed char)48;
unsigned long long int var_15 = 11098689516259297625ULL;
unsigned long long int var_17 = 8576274985033639659ULL;
int zero = 0;
unsigned int var_19 = 4244991108U;
unsigned long long int var_20 = 8780086544166756992ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
