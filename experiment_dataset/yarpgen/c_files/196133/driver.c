#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)250;
unsigned int var_2 = 285605207U;
unsigned char var_5 = (unsigned char)92;
unsigned long long int var_8 = 17413790709707656725ULL;
unsigned int var_11 = 2984249252U;
unsigned char var_15 = (unsigned char)189;
unsigned char var_18 = (unsigned char)14;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 1342997671;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
