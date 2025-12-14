#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 1825148005U;
unsigned long long int var_12 = 16637496582657824911ULL;
long long int var_13 = -2837649028303217305LL;
unsigned short var_14 = (unsigned short)65083;
unsigned char var_15 = (unsigned char)54;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_18 = 8568914679101107120LL;
signed char var_19 = (signed char)-55;
long long int var_20 = -2756391289471557418LL;
unsigned short var_21 = (unsigned short)54959;
void init() {
}

void checksum() {
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
