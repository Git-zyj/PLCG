#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1879464852;
unsigned long long int var_1 = 6915255857217458837ULL;
signed char var_17 = (signed char)-30;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-110;
unsigned int var_22 = 3629915211U;
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
