#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 353499885U;
unsigned short var_11 = (unsigned short)64937;
int var_14 = -732833695;
int var_19 = -722231135;
int zero = 0;
unsigned short var_20 = (unsigned short)19548;
unsigned char var_21 = (unsigned char)97;
void init() {
}

void checksum() {
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
