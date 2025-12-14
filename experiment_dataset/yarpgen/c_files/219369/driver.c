#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1332678595;
unsigned long long int var_4 = 7106240315754377542ULL;
short var_5 = (short)22513;
short var_7 = (short)24396;
int var_8 = -499014332;
int var_9 = 1060341025;
unsigned char var_10 = (unsigned char)181;
int zero = 0;
unsigned short var_11 = (unsigned short)17434;
unsigned int var_12 = 437012645U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
