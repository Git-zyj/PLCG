#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3850038171U;
short var_6 = (short)26902;
signed char var_14 = (signed char)-24;
int zero = 0;
short var_16 = (short)21867;
long long int var_17 = 1535571037721494266LL;
signed char var_18 = (signed char)-11;
unsigned char var_19 = (unsigned char)48;
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
