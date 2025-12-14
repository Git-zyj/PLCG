#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1479721368058072103LL;
int var_3 = -699946458;
long long int var_7 = -3073610792456807057LL;
unsigned short var_18 = (unsigned short)58223;
int zero = 0;
long long int var_20 = -8348099511880585308LL;
unsigned char var_21 = (unsigned char)216;
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
