#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
unsigned char var_2 = (unsigned char)233;
unsigned char var_4 = (unsigned char)202;
unsigned short var_10 = (unsigned short)37999;
unsigned char var_12 = (unsigned char)199;
unsigned short var_13 = (unsigned short)39118;
int zero = 0;
unsigned short var_14 = (unsigned short)55152;
unsigned char var_15 = (unsigned char)227;
unsigned short var_16 = (unsigned short)44874;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
