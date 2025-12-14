#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2118074135;
unsigned int var_7 = 2203266356U;
unsigned char var_10 = (unsigned char)239;
unsigned long long int var_11 = 12785377664800967082ULL;
int var_13 = -119614451;
unsigned int var_15 = 3516473740U;
int zero = 0;
unsigned int var_17 = 2442261746U;
short var_18 = (short)4586;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
