#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
int var_1 = 1047816790;
_Bool var_2 = (_Bool)1;
int var_3 = 194699232;
unsigned long long int var_7 = 11795155387541481233ULL;
_Bool var_8 = (_Bool)1;
int var_9 = -1947296539;
int var_11 = -1636686724;
int zero = 0;
int var_12 = -1717505004;
int var_13 = -1526244991;
unsigned int var_14 = 2924917222U;
int var_15 = -1443495953;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
