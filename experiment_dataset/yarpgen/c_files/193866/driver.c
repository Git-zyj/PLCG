#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)107;
long long int var_3 = 3530373739173084804LL;
unsigned int var_6 = 1293934196U;
long long int var_10 = 8103495788510174570LL;
unsigned char var_11 = (unsigned char)37;
int var_13 = -1951793143;
int zero = 0;
short var_14 = (short)3164;
short var_15 = (short)30692;
void init() {
}

void checksum() {
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
