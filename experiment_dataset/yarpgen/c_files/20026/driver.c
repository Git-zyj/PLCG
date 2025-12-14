#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48040;
unsigned short var_3 = (unsigned short)32129;
short var_5 = (short)-2956;
unsigned short var_6 = (unsigned short)19574;
short var_7 = (short)-28555;
unsigned int var_8 = 328636888U;
unsigned int var_9 = 754926265U;
long long int var_10 = -6911483454655762869LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 1720110057402323485LL;
signed char var_13 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
