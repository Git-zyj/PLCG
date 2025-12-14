#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)17;
int var_3 = 1367772459;
unsigned short var_5 = (unsigned short)33334;
unsigned char var_6 = (unsigned char)181;
unsigned int var_8 = 3056009867U;
signed char var_10 = (signed char)117;
unsigned short var_16 = (unsigned short)37755;
int zero = 0;
unsigned short var_17 = (unsigned short)58952;
unsigned int var_18 = 1965002012U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
