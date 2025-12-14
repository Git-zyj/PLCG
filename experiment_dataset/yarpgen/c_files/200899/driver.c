#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -71776456;
unsigned int var_6 = 2524296089U;
signed char var_8 = (signed char)-46;
unsigned char var_10 = (unsigned char)134;
int var_13 = -561386886;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)235;
void init() {
}

void checksum() {
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
