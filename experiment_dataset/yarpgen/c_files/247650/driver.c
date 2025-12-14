#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
unsigned short var_2 = (unsigned short)44442;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)223;
unsigned char var_12 = (unsigned char)70;
int zero = 0;
int var_16 = -579853819;
unsigned short var_17 = (unsigned short)34103;
unsigned short var_18 = (unsigned short)16958;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
