#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1444629326U;
unsigned short var_6 = (unsigned short)4358;
unsigned short var_8 = (unsigned short)62775;
short var_9 = (short)-26781;
int zero = 0;
unsigned long long int var_12 = 15963610413396929395ULL;
long long int var_13 = -582363259905924264LL;
signed char var_14 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
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
