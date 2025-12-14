#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3833763763689707040LL;
long long int var_3 = 4467840908063102763LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-109;
int zero = 0;
unsigned char var_16 = (unsigned char)98;
int var_17 = 1170900369;
unsigned int var_18 = 22800909U;
long long int var_19 = 983822596852405402LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
