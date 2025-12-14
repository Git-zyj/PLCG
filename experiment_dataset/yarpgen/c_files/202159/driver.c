#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)236;
unsigned long long int var_3 = 9859078693307609670ULL;
unsigned char var_4 = (unsigned char)208;
signed char var_5 = (signed char)94;
unsigned char var_7 = (unsigned char)79;
unsigned short var_9 = (unsigned short)44046;
int zero = 0;
long long int var_11 = -3082684576778175815LL;
unsigned int var_12 = 141641781U;
unsigned char var_13 = (unsigned char)204;
unsigned short var_14 = (unsigned short)7484;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
