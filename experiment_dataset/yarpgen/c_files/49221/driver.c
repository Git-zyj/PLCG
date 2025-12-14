#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -1103301185;
int var_8 = -1563026273;
unsigned long long int var_9 = 1359778100851280514ULL;
unsigned char var_10 = (unsigned char)84;
int zero = 0;
unsigned char var_12 = (unsigned char)57;
unsigned char var_13 = (unsigned char)234;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
