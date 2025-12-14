#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-82;
int var_3 = -1499917868;
unsigned short var_9 = (unsigned short)42211;
unsigned char var_10 = (unsigned char)16;
signed char var_13 = (signed char)-11;
int zero = 0;
unsigned long long int var_16 = 3224212169647216154ULL;
long long int var_17 = -6020478896963423609LL;
unsigned char var_18 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
