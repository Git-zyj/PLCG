#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)24300;
unsigned long long int var_9 = 14455885079065562987ULL;
unsigned char var_10 = (unsigned char)97;
int zero = 0;
int var_13 = -217764978;
short var_14 = (short)4438;
int var_15 = 2091854559;
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
