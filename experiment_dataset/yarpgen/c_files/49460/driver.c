#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)-23;
signed char var_7 = (signed char)91;
signed char var_8 = (signed char)53;
unsigned char var_9 = (unsigned char)153;
unsigned int var_10 = 2084551913U;
int zero = 0;
unsigned int var_12 = 906007324U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
