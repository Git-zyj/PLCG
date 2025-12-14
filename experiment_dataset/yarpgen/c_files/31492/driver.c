#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1558355192U;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)94;
unsigned short var_15 = (unsigned short)5887;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = 312631834575083637LL;
unsigned short var_18 = (unsigned short)6486;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
