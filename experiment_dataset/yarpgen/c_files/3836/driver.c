#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)7426;
unsigned short var_4 = (unsigned short)19525;
long long int var_8 = 6674110343650822946LL;
short var_12 = (short)-7980;
int zero = 0;
unsigned char var_19 = (unsigned char)45;
unsigned char var_20 = (unsigned char)86;
int var_21 = 910579169;
int var_22 = -2084852885;
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
