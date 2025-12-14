#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 841056633165830413LL;
signed char var_4 = (signed char)-34;
int var_10 = -924882296;
unsigned long long int var_11 = 2492835605455545447ULL;
long long int var_12 = -6623844531244596540LL;
int zero = 0;
unsigned long long int var_15 = 11148664168997696310ULL;
unsigned int var_16 = 3493459398U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
