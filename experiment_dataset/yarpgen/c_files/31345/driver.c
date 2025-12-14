#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 3049214413U;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)17390;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)222;
int zero = 0;
unsigned short var_20 = (unsigned short)38671;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
