#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
unsigned int var_2 = 3321485826U;
long long int var_4 = -625287161706821030LL;
int zero = 0;
signed char var_10 = (signed char)-104;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-63;
int var_13 = -1801126725;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
