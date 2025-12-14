#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
signed char var_13 = (signed char)111;
long long int var_14 = -3849968621326374682LL;
short var_17 = (short)19279;
unsigned char var_18 = (unsigned char)171;
int zero = 0;
unsigned int var_20 = 437739713U;
int var_21 = 1859961626;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
