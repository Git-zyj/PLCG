#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4214076143U;
int var_3 = -2127357229;
unsigned char var_4 = (unsigned char)207;
signed char var_8 = (signed char)-37;
unsigned int var_9 = 2430485473U;
int var_10 = -791827244;
unsigned char var_11 = (unsigned char)222;
int zero = 0;
int var_12 = 593544213;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
