#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10980;
unsigned int var_8 = 3334076627U;
long long int var_10 = -9136912387841870129LL;
long long int var_11 = -9212460139278634833LL;
unsigned int var_13 = 3430799987U;
int var_15 = 1800234239;
int zero = 0;
short var_20 = (short)-25456;
unsigned int var_21 = 1198597568U;
unsigned int var_22 = 3703387194U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
