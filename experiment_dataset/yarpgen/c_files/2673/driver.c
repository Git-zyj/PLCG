#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13221483188678816792ULL;
unsigned short var_2 = (unsigned short)20217;
long long int var_5 = -9162094130656790674LL;
int var_6 = 540405811;
int var_9 = 1662764382;
unsigned int var_10 = 1361363997U;
long long int var_11 = 586779856818824061LL;
int zero = 0;
unsigned short var_13 = (unsigned short)21516;
short var_14 = (short)-21494;
signed char var_15 = (signed char)-61;
unsigned char var_16 = (unsigned char)61;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
