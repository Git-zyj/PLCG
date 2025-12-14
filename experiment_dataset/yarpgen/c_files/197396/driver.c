#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)17;
unsigned short var_7 = (unsigned short)15208;
unsigned char var_11 = (unsigned char)83;
long long int var_12 = 5669300708647872815LL;
unsigned int var_13 = 1423457862U;
int zero = 0;
unsigned short var_17 = (unsigned short)4201;
long long int var_18 = 1342087307107002658LL;
unsigned int var_19 = 3589709456U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
