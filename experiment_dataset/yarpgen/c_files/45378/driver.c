#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
signed char var_3 = (signed char)81;
long long int var_4 = 1329387189036233003LL;
unsigned char var_6 = (unsigned char)99;
int var_9 = 1614344810;
_Bool var_11 = (_Bool)0;
unsigned int var_16 = 1814013850U;
int zero = 0;
int var_17 = 211146246;
_Bool var_18 = (_Bool)1;
int var_19 = 1683720132;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
