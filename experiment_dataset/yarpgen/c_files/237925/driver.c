#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
unsigned char var_2 = (unsigned char)29;
unsigned char var_3 = (unsigned char)235;
short var_4 = (short)-17648;
unsigned int var_5 = 2809080397U;
unsigned char var_6 = (unsigned char)242;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -1766536521;
void init() {
}

void checksum() {
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
