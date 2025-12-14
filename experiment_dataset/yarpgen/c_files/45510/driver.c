#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-816;
short var_6 = (short)-7964;
unsigned int var_11 = 8380516U;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = -2065988058;
short var_14 = (short)8955;
int var_15 = -13041045;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
