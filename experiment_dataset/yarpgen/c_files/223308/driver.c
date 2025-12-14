#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)76;
signed char var_2 = (signed char)76;
unsigned short var_5 = (unsigned short)48453;
int zero = 0;
unsigned long long int var_13 = 10014623617239218002ULL;
unsigned int var_14 = 2277441282U;
_Bool var_15 = (_Bool)0;
long long int var_16 = -4252059174685744588LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
