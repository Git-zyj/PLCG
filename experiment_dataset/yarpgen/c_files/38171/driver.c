#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 179794666;
unsigned int var_2 = 287450523U;
int var_4 = 1181230263;
unsigned char var_5 = (unsigned char)148;
unsigned int var_12 = 3511616091U;
signed char var_13 = (signed char)106;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 2996232659U;
long long int var_18 = 3671393687806489014LL;
int var_19 = 269632801;
int var_20 = 1304194211;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
