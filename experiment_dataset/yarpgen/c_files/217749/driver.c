#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63173;
signed char var_7 = (signed char)52;
unsigned long long int var_11 = 2588838772836239442ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 7020533786640620196LL;
unsigned char var_18 = (unsigned char)182;
unsigned short var_19 = (unsigned short)59249;
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
