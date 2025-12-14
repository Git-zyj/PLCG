#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-110;
unsigned char var_12 = (unsigned char)56;
unsigned char var_13 = (unsigned char)47;
int zero = 0;
long long int var_14 = 3209323676225138705LL;
unsigned int var_15 = 2558604132U;
signed char var_16 = (signed char)126;
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
