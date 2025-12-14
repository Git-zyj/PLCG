#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7638293544946602091LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_18 = (short)-16664;
long long int var_19 = -5866520163045949814LL;
unsigned short var_20 = (unsigned short)269;
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
