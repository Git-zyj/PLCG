#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
signed char var_2 = (signed char)-114;
signed char var_3 = (signed char)-121;
signed char var_4 = (signed char)12;
signed char var_5 = (signed char)36;
signed char var_6 = (signed char)68;
signed char var_9 = (signed char)-33;
int zero = 0;
signed char var_10 = (signed char)-91;
signed char var_11 = (signed char)44;
signed char var_12 = (signed char)-89;
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
