#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)78;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)-31;
signed char var_10 = (signed char)-107;
int zero = 0;
signed char var_11 = (signed char)-25;
int var_12 = 924077765;
unsigned int var_13 = 1987787766U;
short var_14 = (short)2135;
void init() {
}

void checksum() {
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
