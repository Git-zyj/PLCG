#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31762;
unsigned int var_4 = 2011807721U;
unsigned int var_5 = 137964023U;
signed char var_6 = (signed char)-122;
unsigned char var_10 = (unsigned char)50;
int zero = 0;
unsigned short var_12 = (unsigned short)22634;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
