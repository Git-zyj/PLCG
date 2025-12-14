#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)15593;
unsigned long long int var_8 = 3252548514814079885ULL;
int zero = 0;
int var_12 = -1922368743;
signed char var_13 = (signed char)-86;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
