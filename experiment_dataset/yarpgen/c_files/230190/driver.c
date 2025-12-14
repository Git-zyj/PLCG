#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-20;
int var_2 = -115621953;
unsigned long long int var_3 = 13278789172021260346ULL;
signed char var_4 = (signed char)6;
unsigned char var_5 = (unsigned char)40;
unsigned long long int var_7 = 2041032735501248735ULL;
unsigned long long int var_8 = 5575945262978435523ULL;
signed char var_10 = (signed char)-8;
long long int var_12 = 1673616527169113371LL;
int zero = 0;
unsigned int var_13 = 250908931U;
unsigned char var_14 = (unsigned char)113;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)1;
long long int var_17 = 8776870283346017980LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
