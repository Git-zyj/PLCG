#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5855758122352364820LL;
short var_7 = (short)-20401;
long long int var_12 = 7222857172094103472LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 246200022U;
unsigned short var_16 = (unsigned short)57562;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
