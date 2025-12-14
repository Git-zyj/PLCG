#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
unsigned int var_2 = 3673667243U;
int var_4 = 1941803053;
long long int var_6 = 1598679500654830174LL;
int var_7 = 1493019202;
long long int var_8 = -986763184504375777LL;
_Bool var_11 = (_Bool)1;
int var_12 = 1890483273;
int zero = 0;
signed char var_14 = (signed char)-59;
short var_15 = (short)-14837;
unsigned int var_16 = 2025371931U;
unsigned long long int var_17 = 14275096216651493339ULL;
short var_18 = (short)10587;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
