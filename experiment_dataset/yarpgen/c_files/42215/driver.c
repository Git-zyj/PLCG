#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -2101211564;
int var_14 = -432647089;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-16;
unsigned short var_21 = (unsigned short)30034;
unsigned char var_22 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
