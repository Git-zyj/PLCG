#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5270;
long long int var_9 = 5270312027870083589LL;
int var_10 = 863548180;
unsigned char var_14 = (unsigned char)170;
int zero = 0;
unsigned int var_15 = 2904840676U;
unsigned short var_16 = (unsigned short)32304;
unsigned char var_17 = (unsigned char)190;
unsigned short var_18 = (unsigned short)55737;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
