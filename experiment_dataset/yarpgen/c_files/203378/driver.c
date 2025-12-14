#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
unsigned char var_1 = (unsigned char)165;
long long int var_5 = -5491053016396295119LL;
unsigned int var_8 = 317499838U;
unsigned int var_13 = 183065792U;
int zero = 0;
unsigned long long int var_14 = 13534020328025201925ULL;
_Bool var_15 = (_Bool)1;
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
