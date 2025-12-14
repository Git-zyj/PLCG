#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)81;
unsigned int var_6 = 1463390879U;
unsigned int var_7 = 2803512631U;
int var_8 = -2138039354;
unsigned short var_9 = (unsigned short)47853;
unsigned char var_10 = (unsigned char)173;
unsigned short var_13 = (unsigned short)39904;
int zero = 0;
unsigned long long int var_16 = 811026322174085034ULL;
unsigned long long int var_17 = 15677667383667391308ULL;
int var_18 = 1076028714;
unsigned long long int var_19 = 15288463184968588578ULL;
unsigned short var_20 = (unsigned short)30585;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
