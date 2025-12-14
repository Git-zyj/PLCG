#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3026562615556900301LL;
unsigned int var_2 = 2508678560U;
unsigned char var_3 = (unsigned char)86;
long long int var_4 = -1662938118922082265LL;
signed char var_6 = (signed char)88;
unsigned char var_9 = (unsigned char)73;
short var_10 = (short)-30738;
long long int var_12 = 2417246985052072984LL;
signed char var_13 = (signed char)-30;
int zero = 0;
unsigned int var_14 = 141768074U;
unsigned short var_15 = (unsigned short)14855;
unsigned int var_16 = 1255742553U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
