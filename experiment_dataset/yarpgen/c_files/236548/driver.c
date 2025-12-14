#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1695583035;
long long int var_3 = 1747920288534637316LL;
int var_4 = -1970275518;
signed char var_5 = (signed char)-122;
signed char var_7 = (signed char)125;
int zero = 0;
unsigned char var_11 = (unsigned char)216;
short var_12 = (short)16502;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
