#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21423;
unsigned short var_9 = (unsigned short)7920;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)60;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 785138481U;
long long int var_16 = 2828626784452060189LL;
unsigned int var_17 = 3139359650U;
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
