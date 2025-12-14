#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2798851311U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_8 = 5149080045077561555ULL;
int var_9 = 1429015971;
unsigned short var_12 = (unsigned short)54414;
int zero = 0;
short var_13 = (short)-19339;
signed char var_14 = (signed char)105;
signed char var_15 = (signed char)95;
void init() {
}

void checksum() {
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
