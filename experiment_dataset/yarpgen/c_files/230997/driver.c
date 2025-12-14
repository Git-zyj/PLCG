#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1562753760537835813LL;
unsigned char var_5 = (unsigned char)59;
signed char var_8 = (signed char)78;
long long int var_10 = 8318076907167673930LL;
long long int var_13 = 2239557657317993091LL;
int zero = 0;
short var_16 = (short)4289;
long long int var_17 = -8354397545605328942LL;
int var_18 = -2130578807;
void init() {
}

void checksum() {
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
