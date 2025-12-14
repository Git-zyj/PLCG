#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)90;
unsigned short var_7 = (unsigned short)21975;
unsigned short var_14 = (unsigned short)41694;
long long int var_16 = 4603046146692434527LL;
int zero = 0;
unsigned char var_19 = (unsigned char)72;
unsigned char var_20 = (unsigned char)101;
unsigned char var_21 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
