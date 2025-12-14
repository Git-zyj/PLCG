#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29066;
long long int var_1 = 2156016796566669025LL;
unsigned long long int var_6 = 5465524881097223020ULL;
signed char var_8 = (signed char)79;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)6715;
int var_13 = 318035599;
unsigned long long int var_14 = 7970229816695816822ULL;
unsigned int var_15 = 1383219142U;
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
