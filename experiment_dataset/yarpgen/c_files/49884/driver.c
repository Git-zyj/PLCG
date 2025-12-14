#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)113;
long long int var_9 = 7123787481238499804LL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)24500;
unsigned short var_12 = (unsigned short)9567;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)196;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3789465200U;
unsigned short var_18 = (unsigned short)31734;
long long int var_19 = -8412012244993449792LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
