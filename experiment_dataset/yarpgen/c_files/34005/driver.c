#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)10;
signed char var_2 = (signed char)64;
signed char var_4 = (signed char)98;
unsigned short var_6 = (unsigned short)3788;
unsigned char var_7 = (unsigned char)175;
long long int var_8 = 2498959336276665751LL;
long long int var_9 = 8575579317179602285LL;
int var_10 = 2007450783;
int var_11 = 1464985963;
long long int var_12 = 7173204569917662051LL;
signed char var_13 = (signed char)83;
long long int var_16 = -3822146242284685949LL;
int zero = 0;
unsigned int var_17 = 3214001171U;
unsigned int var_18 = 2208006122U;
long long int var_19 = -5533983971648683485LL;
unsigned char var_20 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
