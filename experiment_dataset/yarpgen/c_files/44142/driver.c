#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)38;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)227;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)162;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)105;
signed char var_16 = (signed char)110;
void init() {
}

void checksum() {
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
