#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16721362207910387288ULL;
int var_4 = 1808070431;
unsigned char var_5 = (unsigned char)214;
unsigned short var_11 = (unsigned short)25009;
int zero = 0;
unsigned short var_13 = (unsigned short)39850;
unsigned char var_14 = (unsigned char)75;
unsigned char var_15 = (unsigned char)163;
unsigned short var_16 = (unsigned short)3728;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
