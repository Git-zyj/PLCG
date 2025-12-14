#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)18927;
unsigned char var_4 = (unsigned char)130;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)47;
unsigned char var_9 = (unsigned char)251;
unsigned int var_10 = 183358361U;
unsigned char var_11 = (unsigned char)137;
int zero = 0;
long long int var_13 = -7185155297999881463LL;
unsigned char var_14 = (unsigned char)233;
void init() {
}

void checksum() {
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
