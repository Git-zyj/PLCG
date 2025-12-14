#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)86;
long long int var_3 = -4430879872806914342LL;
unsigned long long int var_6 = 14344697615813333297ULL;
short var_9 = (short)-14441;
int var_10 = -2007900633;
unsigned short var_13 = (unsigned short)50303;
int zero = 0;
int var_14 = -1392797671;
unsigned char var_15 = (unsigned char)157;
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
