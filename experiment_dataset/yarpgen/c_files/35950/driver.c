#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2574562323U;
_Bool var_4 = (_Bool)1;
short var_5 = (short)15904;
short var_10 = (short)-4809;
unsigned char var_14 = (unsigned char)215;
int zero = 0;
short var_17 = (short)-19608;
int var_18 = 562946096;
long long int var_19 = -6127397586395102459LL;
void init() {
}

void checksum() {
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
