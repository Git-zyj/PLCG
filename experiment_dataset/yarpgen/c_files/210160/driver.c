#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5843;
_Bool var_6 = (_Bool)1;
short var_9 = (short)-23463;
unsigned long long int var_11 = 10983345908815469248ULL;
signed char var_13 = (signed char)81;
short var_14 = (short)-31412;
int zero = 0;
unsigned char var_17 = (unsigned char)188;
short var_18 = (short)3533;
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
