#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22798;
signed char var_2 = (signed char)119;
signed char var_5 = (signed char)0;
unsigned short var_11 = (unsigned short)35443;
signed char var_12 = (signed char)21;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-40;
unsigned long long int var_16 = 12225492609053964267ULL;
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
