#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
short var_5 = (short)21127;
unsigned short var_6 = (unsigned short)59565;
unsigned char var_7 = (unsigned char)234;
signed char var_11 = (signed char)86;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 10150036723198744839ULL;
int var_18 = -1490262991;
unsigned short var_19 = (unsigned short)45435;
long long int var_20 = -2378355052937097440LL;
unsigned long long int var_21 = 17784777599887339189ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
