#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 177043978U;
int var_5 = 587348587;
unsigned int var_7 = 2313016343U;
short var_8 = (short)22041;
long long int var_11 = -146028771149360274LL;
long long int var_15 = 8281591340809925194LL;
int zero = 0;
unsigned short var_16 = (unsigned short)59785;
short var_17 = (short)19040;
void init() {
}

void checksum() {
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
