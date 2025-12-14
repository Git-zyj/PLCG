#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
signed char var_4 = (signed char)8;
signed char var_9 = (signed char)11;
signed char var_10 = (signed char)-94;
signed char var_11 = (signed char)117;
int zero = 0;
signed char var_12 = (signed char)-3;
signed char var_13 = (signed char)33;
signed char var_14 = (signed char)-101;
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
