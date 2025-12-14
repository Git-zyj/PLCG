#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10253;
int var_1 = 286166221;
short var_5 = (short)7605;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)26242;
signed char var_11 = (signed char)-10;
int var_12 = 1061343226;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
