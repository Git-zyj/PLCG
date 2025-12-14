#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)35;
unsigned long long int var_4 = 8998409613869336668ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)109;
signed char var_10 = (signed char)105;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)5;
unsigned char var_15 = (unsigned char)23;
signed char var_16 = (signed char)-83;
void init() {
}

void checksum() {
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
