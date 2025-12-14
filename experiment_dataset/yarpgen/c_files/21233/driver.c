#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
unsigned char var_2 = (unsigned char)39;
unsigned char var_6 = (unsigned char)40;
long long int var_7 = -7154586549567523434LL;
unsigned char var_9 = (unsigned char)125;
unsigned int var_14 = 418167U;
signed char var_17 = (signed char)9;
int zero = 0;
unsigned char var_20 = (unsigned char)55;
long long int var_21 = -2110729285657261887LL;
unsigned long long int var_22 = 10846141487584963953ULL;
unsigned long long int var_23 = 6509272407626155823ULL;
unsigned char var_24 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
