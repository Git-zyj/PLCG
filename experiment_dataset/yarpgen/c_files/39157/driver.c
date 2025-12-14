#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-99;
long long int var_3 = 7242596846485437537LL;
unsigned short var_4 = (unsigned short)13981;
unsigned short var_6 = (unsigned short)10080;
int var_7 = -343672871;
long long int var_8 = 598439750415219762LL;
int var_12 = -973454207;
int var_13 = 1529064387;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-65;
unsigned int var_17 = 2092346224U;
unsigned short var_18 = (unsigned short)17188;
int zero = 0;
unsigned short var_19 = (unsigned short)6773;
unsigned int var_20 = 1065088535U;
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
