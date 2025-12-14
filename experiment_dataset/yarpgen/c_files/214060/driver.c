#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)235;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)128;
short var_9 = (short)-3741;
unsigned int var_10 = 3301700538U;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -1661048564;
unsigned int var_14 = 3409545667U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
