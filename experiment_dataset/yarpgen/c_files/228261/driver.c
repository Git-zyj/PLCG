#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-34;
signed char var_8 = (signed char)105;
signed char var_9 = (signed char)66;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -641663292517826487LL;
signed char var_12 = (signed char)-75;
short var_13 = (short)12149;
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
