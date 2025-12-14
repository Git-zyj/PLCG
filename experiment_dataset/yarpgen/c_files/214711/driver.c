#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13867;
short var_3 = (short)26233;
unsigned char var_4 = (unsigned char)163;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-102;
unsigned char var_13 = (unsigned char)206;
short var_14 = (short)17201;
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
