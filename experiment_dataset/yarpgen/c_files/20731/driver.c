#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-83;
int var_8 = -529376034;
signed char var_10 = (signed char)(-127 - 1);
long long int var_13 = 3478893069429949167LL;
long long int var_15 = -3295493014068896330LL;
int zero = 0;
unsigned short var_20 = (unsigned short)6058;
long long int var_21 = -6206414818245389237LL;
signed char var_22 = (signed char)-109;
signed char var_23 = (signed char)-83;
void init() {
}

void checksum() {
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
