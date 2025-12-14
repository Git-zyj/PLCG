#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-32;
int var_4 = 1904955075;
unsigned int var_5 = 3884262548U;
int var_6 = 2123249641;
_Bool var_9 = (_Bool)0;
long long int var_12 = 5811585270238627300LL;
unsigned int var_13 = 2870732418U;
unsigned int var_14 = 79480625U;
int zero = 0;
signed char var_20 = (signed char)70;
signed char var_21 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
