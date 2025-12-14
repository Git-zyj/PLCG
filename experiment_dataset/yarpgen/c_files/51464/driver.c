#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1262964930470262688ULL;
int var_1 = -271223581;
long long int var_3 = -2197836997190565486LL;
long long int var_4 = 7959900574020763856LL;
unsigned int var_5 = 1755653781U;
signed char var_7 = (signed char)11;
unsigned long long int var_8 = 14210211656889713901ULL;
int zero = 0;
signed char var_10 = (signed char)38;
unsigned char var_11 = (unsigned char)191;
_Bool var_12 = (_Bool)1;
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
