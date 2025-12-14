#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6470;
unsigned long long int var_1 = 6857424263143799528ULL;
signed char var_5 = (signed char)77;
signed char var_7 = (signed char)40;
int var_10 = -1097031229;
unsigned short var_12 = (unsigned short)57264;
unsigned char var_13 = (unsigned char)37;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6059919528894377359LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
