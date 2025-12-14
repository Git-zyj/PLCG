#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)211;
unsigned short var_4 = (unsigned short)28014;
unsigned int var_5 = 624412860U;
unsigned char var_6 = (unsigned char)0;
int zero = 0;
signed char var_13 = (signed char)-93;
unsigned short var_14 = (unsigned short)55174;
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
