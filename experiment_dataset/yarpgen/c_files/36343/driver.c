#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1893;
short var_3 = (short)-11552;
int var_9 = -1245910633;
signed char var_11 = (signed char)-33;
int var_12 = 1065572263;
int zero = 0;
int var_20 = 897559032;
int var_21 = -1259582066;
signed char var_22 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
