#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14400;
unsigned char var_1 = (unsigned char)220;
unsigned char var_3 = (unsigned char)197;
signed char var_4 = (signed char)-27;
signed char var_5 = (signed char)115;
int zero = 0;
unsigned char var_10 = (unsigned char)86;
unsigned char var_11 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
