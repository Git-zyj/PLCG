#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32176;
unsigned char var_2 = (unsigned char)251;
signed char var_13 = (signed char)-37;
int var_14 = 1645425207;
unsigned short var_16 = (unsigned short)51795;
int zero = 0;
unsigned char var_18 = (unsigned char)83;
unsigned short var_19 = (unsigned short)57080;
void init() {
}

void checksum() {
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
