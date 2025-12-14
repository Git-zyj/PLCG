#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-113;
unsigned int var_6 = 590903103U;
unsigned char var_8 = (unsigned char)27;
signed char var_9 = (signed char)13;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)42;
unsigned long long int var_12 = 11568705001225484817ULL;
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
