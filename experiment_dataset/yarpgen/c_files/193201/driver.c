#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-72;
unsigned char var_8 = (unsigned char)213;
unsigned int var_9 = 2194947342U;
int zero = 0;
unsigned char var_10 = (unsigned char)230;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4110407275U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
