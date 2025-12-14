#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4251820372U;
signed char var_2 = (signed char)99;
int var_8 = 483039548;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 65958383007999741LL;
unsigned short var_14 = (unsigned short)32859;
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
