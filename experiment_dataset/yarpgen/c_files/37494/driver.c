#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
unsigned long long int var_2 = 7870964157692349381ULL;
_Bool var_7 = (_Bool)0;
signed char var_16 = (signed char)72;
unsigned char var_17 = (unsigned char)125;
unsigned long long int var_19 = 719040015989238725ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)171;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
