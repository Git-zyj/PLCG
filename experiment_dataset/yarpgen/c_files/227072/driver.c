#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19815;
short var_4 = (short)14641;
int var_7 = -1597550468;
signed char var_9 = (signed char)-109;
int zero = 0;
short var_10 = (short)-2561;
signed char var_11 = (signed char)100;
short var_12 = (short)30062;
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
