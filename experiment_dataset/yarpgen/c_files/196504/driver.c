#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
unsigned short var_2 = (unsigned short)19707;
unsigned char var_4 = (unsigned char)102;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)13305;
unsigned char var_7 = (unsigned char)84;
unsigned char var_13 = (unsigned char)219;
unsigned char var_17 = (unsigned char)17;
unsigned char var_19 = (unsigned char)245;
int zero = 0;
unsigned char var_20 = (unsigned char)106;
unsigned short var_21 = (unsigned short)63852;
unsigned char var_22 = (unsigned char)99;
unsigned char var_23 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
