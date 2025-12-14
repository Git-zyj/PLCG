#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9021428318470704660LL;
short var_3 = (short)11977;
short var_5 = (short)3370;
unsigned int var_7 = 1941069101U;
int zero = 0;
unsigned short var_10 = (unsigned short)7067;
unsigned int var_11 = 2178570272U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
