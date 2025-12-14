#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8143;
_Bool var_4 = (_Bool)0;
unsigned long long int var_9 = 15918560783358838531ULL;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)83;
unsigned long long int var_16 = 1656088781869138707ULL;
unsigned long long int var_17 = 7093496895138577733ULL;
int zero = 0;
int var_19 = 430452665;
unsigned int var_20 = 416722586U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
