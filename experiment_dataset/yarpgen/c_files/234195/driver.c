#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 9356068313834953804ULL;
unsigned int var_9 = 4272136862U;
int var_10 = 1403057777;
unsigned long long int var_13 = 1799589021562919170ULL;
int zero = 0;
unsigned int var_15 = 265054561U;
unsigned long long int var_16 = 11875651637712723046ULL;
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
