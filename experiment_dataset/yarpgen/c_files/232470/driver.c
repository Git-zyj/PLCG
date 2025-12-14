#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_6 = 77712128;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-24;
unsigned int var_10 = 3023564239U;
signed char var_11 = (signed char)77;
int zero = 0;
unsigned short var_14 = (unsigned short)42195;
unsigned short var_15 = (unsigned short)35752;
_Bool var_16 = (_Bool)1;
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
