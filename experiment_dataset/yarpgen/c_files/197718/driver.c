#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4759782459458683198LL;
signed char var_2 = (signed char)35;
long long int var_3 = -1862783476074361444LL;
int var_4 = -155720484;
signed char var_7 = (signed char)7;
int var_8 = 1568772595;
signed char var_10 = (signed char)114;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 1318218530;
void init() {
}

void checksum() {
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
