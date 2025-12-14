#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-12;
signed char var_6 = (signed char)-29;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2069409123U;
int zero = 0;
unsigned long long int var_11 = 7384037157085340222ULL;
short var_12 = (short)24527;
void init() {
}

void checksum() {
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
