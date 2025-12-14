#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)10;
unsigned char var_8 = (unsigned char)17;
long long int var_9 = 4383139136975511194LL;
_Bool var_11 = (_Bool)1;
int var_12 = -1666903882;
unsigned short var_14 = (unsigned short)31189;
unsigned char var_15 = (unsigned char)79;
int zero = 0;
short var_16 = (short)21314;
unsigned short var_17 = (unsigned short)18676;
unsigned char var_18 = (unsigned char)167;
long long int var_19 = -8492821842273517661LL;
int var_20 = -2079737402;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
