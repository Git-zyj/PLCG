#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
signed char var_12 = (signed char)20;
int zero = 0;
short var_14 = (short)-14779;
short var_15 = (short)-27662;
signed char var_16 = (signed char)-111;
long long int var_17 = -344345481224955214LL;
signed char var_18 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
