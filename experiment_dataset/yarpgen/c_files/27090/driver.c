#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6924595326915658199LL;
short var_9 = (short)-31123;
unsigned short var_11 = (unsigned short)6982;
int zero = 0;
unsigned char var_15 = (unsigned char)145;
_Bool var_16 = (_Bool)1;
long long int var_17 = -611013849089862520LL;
long long int var_18 = 8992976550169834603LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
