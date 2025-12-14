#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13934;
unsigned long long int var_3 = 14883462788758596368ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 1025057115675178915ULL;
unsigned long long int var_11 = 4262127732117213611ULL;
int zero = 0;
short var_13 = (short)4946;
unsigned int var_14 = 2867937382U;
unsigned char var_15 = (unsigned char)112;
void init() {
}

void checksum() {
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
