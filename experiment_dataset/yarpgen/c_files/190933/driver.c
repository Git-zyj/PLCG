#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)5240;
unsigned char var_10 = (unsigned char)212;
int zero = 0;
long long int var_11 = -4952818051145645863LL;
short var_12 = (short)-32116;
long long int var_13 = -8459966656827748610LL;
short var_14 = (short)-26223;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
