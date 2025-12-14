#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3078778335U;
unsigned long long int var_6 = 18371851246396524570ULL;
unsigned short var_7 = (unsigned short)58699;
unsigned char var_9 = (unsigned char)62;
signed char var_10 = (signed char)64;
int var_11 = 1191646020;
int zero = 0;
signed char var_12 = (signed char)-64;
unsigned char var_13 = (unsigned char)77;
unsigned char var_14 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
