#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)89;
unsigned char var_12 = (unsigned char)147;
unsigned char var_15 = (unsigned char)108;
unsigned long long int var_17 = 13781969599256170268ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)62420;
unsigned char var_21 = (unsigned char)243;
void init() {
}

void checksum() {
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
