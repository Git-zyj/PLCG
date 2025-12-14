#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7216;
short var_6 = (short)14403;
short var_8 = (short)11900;
signed char var_9 = (signed char)8;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 95735360U;
short var_14 = (short)14485;
void init() {
}

void checksum() {
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
