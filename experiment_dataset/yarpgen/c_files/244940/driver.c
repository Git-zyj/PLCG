#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6303;
int var_1 = 302202051;
unsigned short var_2 = (unsigned short)50396;
unsigned char var_3 = (unsigned char)235;
unsigned int var_7 = 2031417264U;
signed char var_9 = (signed char)99;
short var_10 = (short)-10980;
unsigned int var_19 = 2619390598U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 469084517U;
short var_22 = (short)29831;
signed char var_23 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
