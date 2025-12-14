#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
unsigned short var_4 = (unsigned short)43737;
unsigned char var_5 = (unsigned char)0;
unsigned short var_6 = (unsigned short)14119;
unsigned short var_10 = (unsigned short)45813;
int zero = 0;
unsigned char var_13 = (unsigned char)169;
signed char var_14 = (signed char)-59;
void init() {
}

void checksum() {
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
