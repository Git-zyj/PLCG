#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9187463127301948659ULL;
long long int var_4 = -7548244155585221924LL;
unsigned long long int var_7 = 16265826062858029740ULL;
long long int var_10 = 7623256481284826431LL;
unsigned int var_13 = 106329799U;
unsigned short var_16 = (unsigned short)33567;
int zero = 0;
short var_19 = (short)28201;
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
