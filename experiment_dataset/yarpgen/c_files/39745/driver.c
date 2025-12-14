#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
_Bool var_1 = (_Bool)1;
int var_3 = 683325336;
signed char var_7 = (signed char)-95;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)66;
signed char var_14 = (signed char)79;
void init() {
}

void checksum() {
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
