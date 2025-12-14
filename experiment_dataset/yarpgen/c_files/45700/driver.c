#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
unsigned int var_3 = 4185585321U;
int var_6 = -266027432;
signed char var_8 = (signed char)11;
signed char var_9 = (signed char)-116;
int zero = 0;
short var_10 = (short)15093;
signed char var_11 = (signed char)-48;
short var_12 = (short)-8324;
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
