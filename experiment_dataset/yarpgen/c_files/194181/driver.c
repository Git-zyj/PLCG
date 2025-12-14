#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7052;
unsigned char var_7 = (unsigned char)2;
_Bool var_11 = (_Bool)0;
long long int var_12 = 1328465923219813997LL;
int zero = 0;
unsigned short var_16 = (unsigned short)25102;
signed char var_17 = (signed char)78;
unsigned int var_18 = 4024545154U;
int var_19 = -128846022;
unsigned int var_20 = 1798362735U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
