#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2274157023975087413LL;
short var_3 = (short)15400;
unsigned char var_4 = (unsigned char)187;
unsigned int var_5 = 2904978775U;
unsigned char var_7 = (unsigned char)240;
unsigned char var_8 = (unsigned char)245;
unsigned long long int var_10 = 14371277513136070872ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)24547;
unsigned int var_12 = 2102288255U;
short var_13 = (short)6095;
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
