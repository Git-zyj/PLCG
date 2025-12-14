#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -426490660;
short var_9 = (short)31824;
unsigned char var_10 = (unsigned char)125;
int zero = 0;
long long int var_11 = 2507975899705325359LL;
signed char var_12 = (signed char)-42;
unsigned char var_13 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
