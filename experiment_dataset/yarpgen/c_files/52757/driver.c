#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_5 = (short)-28095;
unsigned short var_6 = (unsigned short)17405;
unsigned int var_9 = 1700516947U;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)49;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-49;
unsigned short var_18 = (unsigned short)38265;
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
