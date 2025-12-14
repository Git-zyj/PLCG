#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)86;
short var_12 = (short)28773;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_18 = (short)-2806;
unsigned short var_19 = (unsigned short)35805;
signed char var_20 = (signed char)115;
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
