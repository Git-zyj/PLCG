#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
unsigned int var_11 = 2435825224U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 4027289335U;
int zero = 0;
unsigned char var_18 = (unsigned char)52;
int var_19 = 859563010;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
