#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
short var_2 = (short)-29042;
unsigned short var_5 = (unsigned short)16648;
short var_6 = (short)19782;
unsigned char var_7 = (unsigned char)150;
unsigned long long int var_9 = 9523006248133053408ULL;
int var_10 = 310252019;
int zero = 0;
short var_12 = (short)-7292;
unsigned char var_13 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
