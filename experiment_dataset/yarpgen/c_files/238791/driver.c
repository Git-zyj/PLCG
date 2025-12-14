#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 10698489448071480730ULL;
unsigned long long int var_12 = 16031993710166147669ULL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 2760961897640213282LL;
int zero = 0;
long long int var_19 = -945822183287319885LL;
signed char var_20 = (signed char)-121;
long long int var_21 = 6585310284263598301LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
