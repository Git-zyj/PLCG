#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-104;
int var_4 = -1689698599;
int var_6 = 1241677598;
int zero = 0;
signed char var_10 = (signed char)-73;
unsigned short var_11 = (unsigned short)55534;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)11;
short var_14 = (short)11365;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
