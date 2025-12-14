#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
signed char var_7 = (signed char)-32;
signed char var_8 = (signed char)-58;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-45;
signed char var_12 = (signed char)-42;
signed char var_14 = (signed char)-6;
int zero = 0;
signed char var_19 = (signed char)64;
signed char var_20 = (signed char)92;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-75;
signed char var_23 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
