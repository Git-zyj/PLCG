#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1948015680;
int var_7 = -687467877;
int var_8 = 639097552;
long long int var_13 = -2134349789103100536LL;
int zero = 0;
unsigned char var_19 = (unsigned char)44;
int var_20 = -1344502406;
unsigned char var_21 = (unsigned char)23;
unsigned short var_22 = (unsigned short)19184;
unsigned char var_23 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
