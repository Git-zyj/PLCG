#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-117;
unsigned long long int var_6 = 15306984937368005673ULL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)32;
unsigned char var_14 = (unsigned char)14;
int zero = 0;
unsigned short var_18 = (unsigned short)52745;
unsigned int var_19 = 4010183523U;
void init() {
}

void checksum() {
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
