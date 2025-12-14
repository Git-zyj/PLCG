#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
unsigned char var_1 = (unsigned char)232;
unsigned short var_7 = (unsigned short)28302;
long long int var_8 = -4543833673308862477LL;
unsigned int var_9 = 1255593418U;
int zero = 0;
unsigned char var_11 = (unsigned char)67;
unsigned long long int var_12 = 16028964224209766260ULL;
short var_13 = (short)8416;
unsigned char var_14 = (unsigned char)143;
unsigned short var_15 = (unsigned short)63882;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
