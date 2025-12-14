#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1339416831;
short var_4 = (short)-27463;
short var_5 = (short)503;
unsigned char var_10 = (unsigned char)146;
int zero = 0;
short var_12 = (short)-23409;
long long int var_13 = -188268612089712265LL;
unsigned long long int var_14 = 7081676562982978155ULL;
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
