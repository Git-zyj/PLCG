#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-68;
signed char var_5 = (signed char)-14;
signed char var_6 = (signed char)-39;
signed char var_7 = (signed char)15;
signed char var_9 = (signed char)-91;
signed char var_10 = (signed char)109;
int zero = 0;
signed char var_11 = (signed char)-81;
signed char var_12 = (signed char)19;
signed char var_13 = (signed char)-53;
signed char var_14 = (signed char)-120;
signed char var_15 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
