#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8656677859892324937LL;
unsigned long long int var_1 = 14149517296257283007ULL;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)148;
short var_8 = (short)-13266;
signed char var_11 = (signed char)-34;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)16;
void init() {
}

void checksum() {
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
