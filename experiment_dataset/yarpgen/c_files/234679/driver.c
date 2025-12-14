#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-4435;
_Bool var_8 = (_Bool)0;
int var_9 = 1084895088;
int zero = 0;
short var_11 = (short)26086;
unsigned int var_12 = 603131243U;
unsigned long long int var_13 = 13362881351028470322ULL;
unsigned short var_14 = (unsigned short)1202;
unsigned int var_15 = 441459033U;
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
