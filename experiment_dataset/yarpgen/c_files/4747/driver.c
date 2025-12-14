#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1824462500;
signed char var_5 = (signed char)-80;
short var_8 = (short)-16846;
short var_10 = (short)-19497;
int zero = 0;
unsigned int var_12 = 1159485286U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
