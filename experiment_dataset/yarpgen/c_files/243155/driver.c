#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2815656657267065971LL;
signed char var_4 = (signed char)(-127 - 1);
signed char var_5 = (signed char)-77;
long long int var_10 = -8369093737392613561LL;
int zero = 0;
unsigned long long int var_11 = 4287730274026158056ULL;
unsigned short var_12 = (unsigned short)49364;
unsigned char var_13 = (unsigned char)135;
int var_14 = -1137411251;
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
