#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -9104597830349079350LL;
unsigned char var_7 = (unsigned char)92;
_Bool var_9 = (_Bool)1;
long long int var_16 = -5575080665378640537LL;
short var_17 = (short)-23756;
int zero = 0;
long long int var_18 = 1502908355488026579LL;
short var_19 = (short)12474;
long long int var_20 = -7989953981941688188LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
