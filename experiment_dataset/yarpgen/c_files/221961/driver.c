#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3305963370U;
int var_7 = 1819173924;
_Bool var_8 = (_Bool)0;
int var_9 = 1914379021;
unsigned int var_13 = 1889145270U;
int var_14 = -257202158;
int zero = 0;
signed char var_16 = (signed char)-98;
int var_17 = 124227326;
unsigned short var_18 = (unsigned short)1363;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
