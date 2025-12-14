#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5728070460170962722LL;
unsigned char var_7 = (unsigned char)18;
int var_9 = -1310447867;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 6629080114143572324ULL;
signed char var_16 = (signed char)20;
int zero = 0;
unsigned int var_17 = 1464719935U;
int var_18 = 1841417496;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
