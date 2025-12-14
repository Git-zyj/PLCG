#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)8;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)21272;
unsigned short var_11 = (unsigned short)49769;
signed char var_14 = (signed char)-22;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)88;
signed char var_21 = (signed char)63;
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
