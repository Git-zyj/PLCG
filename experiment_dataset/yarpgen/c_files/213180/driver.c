#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
unsigned long long int var_2 = 15029575539879969378ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2065757535U;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)216;
unsigned long long int var_7 = 13937424566821001486ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)74;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)27526;
int var_15 = -400691409;
signed char var_16 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
