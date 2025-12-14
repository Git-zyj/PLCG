#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3766440998585200684LL;
long long int var_6 = 2181848736333299421LL;
unsigned short var_8 = (unsigned short)40874;
unsigned short var_11 = (unsigned short)64769;
unsigned int var_13 = 1101621782U;
long long int var_16 = -3883939895053797045LL;
signed char var_17 = (signed char)-106;
short var_19 = (short)-234;
int zero = 0;
unsigned char var_20 = (unsigned char)89;
int var_21 = 1815865985;
short var_22 = (short)-16107;
long long int var_23 = -1516951532833511094LL;
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
