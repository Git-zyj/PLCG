#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2519878162U;
signed char var_1 = (signed char)-108;
signed char var_3 = (signed char)-46;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)54718;
int zero = 0;
unsigned short var_11 = (unsigned short)20939;
unsigned short var_12 = (unsigned short)25239;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
