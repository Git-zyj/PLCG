#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6621466639195129611ULL;
int var_1 = -1619151360;
unsigned char var_3 = (unsigned char)140;
long long int var_6 = -7516393150031702597LL;
int var_7 = -1869248343;
unsigned int var_8 = 4212538709U;
int var_9 = 1447923190;
int zero = 0;
unsigned char var_14 = (unsigned char)154;
unsigned char var_15 = (unsigned char)168;
unsigned short var_16 = (unsigned short)12253;
long long int var_17 = -996078515498743922LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
