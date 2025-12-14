#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 106467024949933137ULL;
short var_1 = (short)27127;
unsigned char var_2 = (unsigned char)170;
unsigned short var_5 = (unsigned short)48744;
short var_6 = (short)-4910;
unsigned int var_10 = 4074955970U;
short var_11 = (short)-11934;
unsigned int var_14 = 3483280581U;
int zero = 0;
long long int var_15 = -4604815865555763770LL;
long long int var_16 = 999837367791272951LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
