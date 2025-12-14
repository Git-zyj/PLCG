#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 516056984U;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)45;
unsigned long long int var_9 = 5573722673209985251ULL;
short var_10 = (short)3404;
int zero = 0;
int var_11 = -1457943809;
unsigned char var_12 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
