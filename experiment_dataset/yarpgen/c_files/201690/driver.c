#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3562823757984056652LL;
unsigned short var_4 = (unsigned short)28939;
int var_6 = 412222060;
unsigned int var_7 = 1199555701U;
long long int var_9 = -2579446473327083849LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = 1797274013154271030LL;
unsigned short var_14 = (unsigned short)3960;
int zero = 0;
long long int var_15 = 6182453818830457532LL;
unsigned char var_16 = (unsigned char)51;
long long int var_17 = 3072394192762026960LL;
void init() {
}

void checksum() {
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
