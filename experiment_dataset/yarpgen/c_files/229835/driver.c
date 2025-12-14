#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_5 = 7385465431144912687LL;
unsigned char var_7 = (unsigned char)64;
_Bool var_10 = (_Bool)0;
long long int var_12 = 5146874005406873819LL;
int var_16 = 1420974336;
int var_17 = 1745639389;
int zero = 0;
unsigned int var_19 = 658909149U;
signed char var_20 = (signed char)25;
unsigned short var_21 = (unsigned short)11385;
_Bool var_22 = (_Bool)1;
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
