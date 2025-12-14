#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -3649711774631879688LL;
short var_8 = (short)9445;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-78;
signed char var_12 = (signed char)3;
int zero = 0;
unsigned long long int var_15 = 7032913010147198633ULL;
unsigned char var_16 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
