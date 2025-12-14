#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -784907749;
_Bool var_2 = (_Bool)0;
short var_3 = (short)13343;
signed char var_6 = (signed char)-116;
int zero = 0;
unsigned char var_10 = (unsigned char)48;
unsigned long long int var_11 = 5112897537033305275ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
