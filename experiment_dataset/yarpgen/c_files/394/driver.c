#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)74;
short var_11 = (short)16663;
signed char var_12 = (signed char)-78;
int zero = 0;
int var_13 = -2105854162;
signed char var_14 = (signed char)106;
signed char var_15 = (signed char)-63;
short var_16 = (short)-3929;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
