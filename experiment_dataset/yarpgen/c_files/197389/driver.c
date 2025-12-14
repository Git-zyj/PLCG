#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58176;
short var_5 = (short)23293;
long long int var_6 = -4237063776349407614LL;
unsigned short var_7 = (unsigned short)3544;
unsigned short var_13 = (unsigned short)6193;
unsigned short var_14 = (unsigned short)8596;
signed char var_16 = (signed char)-40;
unsigned long long int var_17 = 17385975047228860442ULL;
int zero = 0;
unsigned int var_19 = 1569209340U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
