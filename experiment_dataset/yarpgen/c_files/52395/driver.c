#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)118;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-30;
short var_14 = (short)-1883;
int zero = 0;
int var_19 = -1307511636;
int var_20 = -1584342724;
void init() {
}

void checksum() {
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
