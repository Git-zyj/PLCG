#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6081399052242960119LL;
unsigned long long int var_2 = 7149078333227171312ULL;
long long int var_3 = 290661274940285412LL;
unsigned char var_4 = (unsigned char)61;
unsigned short var_7 = (unsigned short)59164;
unsigned short var_8 = (unsigned short)64805;
unsigned short var_12 = (unsigned short)33964;
unsigned short var_15 = (unsigned short)6492;
int zero = 0;
unsigned char var_16 = (unsigned char)22;
signed char var_17 = (signed char)8;
unsigned short var_18 = (unsigned short)25900;
unsigned long long int var_19 = 11336941922868456141ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
