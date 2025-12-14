#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2509923223207421776ULL;
unsigned char var_5 = (unsigned char)230;
unsigned int var_6 = 2985698478U;
unsigned short var_8 = (unsigned short)15651;
unsigned int var_9 = 2703421308U;
int zero = 0;
short var_10 = (short)27511;
unsigned long long int var_11 = 7663358987595516041ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
