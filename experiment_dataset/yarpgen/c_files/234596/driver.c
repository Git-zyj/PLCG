#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11516;
unsigned short var_1 = (unsigned short)13525;
signed char var_4 = (signed char)-108;
unsigned char var_7 = (unsigned char)161;
unsigned char var_10 = (unsigned char)119;
int zero = 0;
signed char var_12 = (signed char)46;
unsigned char var_13 = (unsigned char)51;
unsigned short var_14 = (unsigned short)7499;
unsigned char var_15 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
