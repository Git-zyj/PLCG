#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4583643264201000513LL;
signed char var_12 = (signed char)-52;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 453553564U;
signed char var_20 = (signed char)115;
signed char var_21 = (signed char)-127;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
