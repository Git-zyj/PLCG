#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1039946161U;
int var_4 = 920366170;
unsigned int var_11 = 2257823677U;
unsigned char var_12 = (unsigned char)198;
unsigned long long int var_13 = 12308330765205071092ULL;
unsigned char var_16 = (unsigned char)87;
int zero = 0;
unsigned int var_20 = 954107848U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)189;
short var_23 = (short)-15589;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
