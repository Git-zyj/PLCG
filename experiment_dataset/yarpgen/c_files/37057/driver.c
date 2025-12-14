#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7429;
int var_4 = -1005616153;
short var_8 = (short)8171;
long long int var_9 = -6315230313413527814LL;
short var_10 = (short)-2193;
long long int var_11 = 1857456880188167189LL;
int zero = 0;
short var_12 = (short)27714;
unsigned short var_13 = (unsigned short)14859;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
