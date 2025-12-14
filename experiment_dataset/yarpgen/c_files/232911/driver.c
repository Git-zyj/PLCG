#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1607937423310526148ULL;
unsigned long long int var_5 = 6720570101620612068ULL;
unsigned long long int var_7 = 9325105746123520329ULL;
int var_9 = 796594704;
int var_10 = 1126267571;
unsigned char var_11 = (unsigned char)230;
int zero = 0;
signed char var_12 = (signed char)113;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13394409668824424287ULL;
unsigned long long int var_15 = 5322710520852882798ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
