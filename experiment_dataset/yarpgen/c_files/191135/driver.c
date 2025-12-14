#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)44;
unsigned long long int var_5 = 10525312009431622823ULL;
short var_8 = (short)-30461;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-106;
int zero = 0;
unsigned short var_12 = (unsigned short)29526;
unsigned short var_13 = (unsigned short)2479;
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
