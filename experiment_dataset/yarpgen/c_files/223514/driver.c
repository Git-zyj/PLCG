#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-108;
unsigned char var_3 = (unsigned char)45;
unsigned int var_4 = 1330916811U;
unsigned char var_5 = (unsigned char)86;
signed char var_6 = (signed char)-107;
unsigned int var_9 = 3332586065U;
int zero = 0;
int var_10 = -959078151;
signed char var_11 = (signed char)-1;
unsigned short var_12 = (unsigned short)2607;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
