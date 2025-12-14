#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13945511371650197068ULL;
unsigned char var_4 = (unsigned char)125;
unsigned char var_5 = (unsigned char)191;
signed char var_7 = (signed char)5;
unsigned int var_9 = 350129552U;
_Bool var_10 = (_Bool)1;
short var_13 = (short)-4678;
unsigned int var_15 = 2379315712U;
unsigned short var_16 = (unsigned short)56185;
long long int var_17 = 4604233104025120957LL;
int zero = 0;
long long int var_19 = 3292099434971499319LL;
unsigned short var_20 = (unsigned short)61262;
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
