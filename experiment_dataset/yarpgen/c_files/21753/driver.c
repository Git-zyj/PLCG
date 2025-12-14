#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)65238;
unsigned char var_4 = (unsigned char)227;
unsigned short var_5 = (unsigned short)24604;
int var_9 = -754149305;
long long int var_10 = -2225098988419516071LL;
unsigned int var_11 = 388114646U;
short var_16 = (short)6359;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)126;
unsigned short var_21 = (unsigned short)12012;
unsigned char var_22 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
