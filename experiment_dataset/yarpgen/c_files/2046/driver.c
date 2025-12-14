#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3704572098U;
unsigned int var_10 = 1868918138U;
unsigned long long int var_12 = 7967350925035929983ULL;
unsigned int var_13 = 1912120589U;
unsigned int var_14 = 1778011401U;
int zero = 0;
unsigned char var_18 = (unsigned char)184;
short var_19 = (short)-10985;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
