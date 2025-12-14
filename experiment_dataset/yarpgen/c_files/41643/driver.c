#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 569741904U;
unsigned long long int var_3 = 1244329066531176870ULL;
unsigned long long int var_4 = 8772286384760094936ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 15929737848646854629ULL;
unsigned long long int var_12 = 15005828004605702156ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
