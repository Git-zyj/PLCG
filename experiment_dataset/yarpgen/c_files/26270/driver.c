#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
signed char var_5 = (signed char)-14;
signed char var_6 = (signed char)87;
signed char var_7 = (signed char)-93;
short var_9 = (short)30401;
int zero = 0;
short var_11 = (short)-27000;
signed char var_12 = (signed char)119;
signed char var_13 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
