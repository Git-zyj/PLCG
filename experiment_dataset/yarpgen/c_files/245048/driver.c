#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47060;
unsigned char var_1 = (unsigned char)9;
unsigned int var_4 = 1708939083U;
int var_7 = 425601832;
signed char var_8 = (signed char)97;
long long int var_10 = 1391012257065844118LL;
int zero = 0;
int var_15 = -436704447;
signed char var_16 = (signed char)64;
int var_17 = 24525919;
unsigned short var_18 = (unsigned short)15842;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
