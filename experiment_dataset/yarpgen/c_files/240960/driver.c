#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5561898190161443459ULL;
unsigned int var_2 = 3983348068U;
_Bool var_4 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 1555740069U;
int zero = 0;
short var_15 = (short)16278;
signed char var_16 = (signed char)56;
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
