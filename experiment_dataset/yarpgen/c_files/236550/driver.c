#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14900570753658153277ULL;
long long int var_2 = -4669058694779645252LL;
long long int var_3 = -2576670769665867016LL;
unsigned long long int var_4 = 6461300756547218997ULL;
signed char var_8 = (signed char)26;
signed char var_14 = (signed char)127;
int zero = 0;
unsigned char var_18 = (unsigned char)179;
unsigned long long int var_19 = 9390537628791588577ULL;
signed char var_20 = (signed char)-22;
long long int var_21 = -2096169667314065642LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
