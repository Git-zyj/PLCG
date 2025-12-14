#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 449983333U;
unsigned long long int var_2 = 13508834480249987670ULL;
unsigned long long int var_3 = 2628499056945102043ULL;
signed char var_4 = (signed char)-34;
short var_5 = (short)29410;
unsigned char var_7 = (unsigned char)131;
unsigned char var_10 = (unsigned char)125;
long long int var_11 = -5850690280820302298LL;
long long int var_12 = -6856597714818441074LL;
int zero = 0;
unsigned int var_13 = 3954505437U;
unsigned int var_14 = 3803704913U;
unsigned short var_15 = (unsigned short)23619;
_Bool var_16 = (_Bool)1;
int var_17 = 1232237155;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
