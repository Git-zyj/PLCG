#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)119;
unsigned short var_6 = (unsigned short)17759;
unsigned long long int var_7 = 746121261248392705ULL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
long long int var_16 = 4127235901745286447LL;
signed char var_17 = (signed char)88;
int zero = 0;
short var_20 = (short)21730;
unsigned long long int var_21 = 5432175018552616783ULL;
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
