#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2003502613U;
unsigned short var_1 = (unsigned short)17851;
unsigned short var_4 = (unsigned short)57477;
unsigned char var_5 = (unsigned char)170;
long long int var_8 = 4447538978583224860LL;
int var_10 = 1725730478;
int zero = 0;
int var_11 = 1448684715;
int var_12 = 1979707185;
unsigned short var_13 = (unsigned short)22291;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
