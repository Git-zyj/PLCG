#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2012340020;
_Bool var_3 = (_Bool)1;
int var_4 = 1544219866;
unsigned int var_5 = 172534899U;
unsigned long long int var_6 = 15333532835896030676ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-4;
unsigned long long int var_12 = 9691279736215182796ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)242;
unsigned char var_15 = (unsigned char)124;
unsigned long long int var_16 = 2805836313985235119ULL;
unsigned long long int var_17 = 11542144416921527777ULL;
void init() {
}

void checksum() {
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
