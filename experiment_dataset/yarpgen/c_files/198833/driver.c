#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)200;
unsigned short var_8 = (unsigned short)62035;
short var_11 = (short)9643;
int zero = 0;
unsigned char var_12 = (unsigned char)208;
unsigned int var_13 = 2588860849U;
long long int var_14 = 5073361484253187579LL;
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
