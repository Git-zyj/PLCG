#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7609532359386414456LL;
signed char var_11 = (signed char)6;
short var_16 = (short)10626;
long long int var_17 = -168702508922600479LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 2120108810;
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
