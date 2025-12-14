#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-1;
signed char var_4 = (signed char)107;
signed char var_5 = (signed char)77;
signed char var_6 = (signed char)-37;
signed char var_12 = (signed char)43;
signed char var_14 = (signed char)-4;
int zero = 0;
signed char var_16 = (signed char)-102;
signed char var_17 = (signed char)-78;
signed char var_18 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
