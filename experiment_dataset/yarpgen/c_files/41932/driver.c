#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2110127595U;
_Bool var_8 = (_Bool)0;
short var_10 = (short)736;
signed char var_18 = (signed char)-41;
int zero = 0;
unsigned int var_20 = 1513428252U;
long long int var_21 = 8710738129686362089LL;
unsigned long long int var_22 = 11354015874342045417ULL;
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
