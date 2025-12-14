#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 604370414;
int var_7 = 304502860;
unsigned char var_12 = (unsigned char)169;
int zero = 0;
unsigned char var_13 = (unsigned char)194;
_Bool var_14 = (_Bool)1;
int var_15 = 1538248563;
int var_16 = -1794253798;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
