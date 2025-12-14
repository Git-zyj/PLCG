#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1423589974;
unsigned long long int var_7 = 14871266584957737945ULL;
unsigned char var_8 = (unsigned char)240;
signed char var_10 = (signed char)-86;
_Bool var_12 = (_Bool)0;
signed char var_16 = (signed char)105;
int zero = 0;
unsigned short var_17 = (unsigned short)17440;
long long int var_18 = -84196871314251996LL;
unsigned short var_19 = (unsigned short)39499;
int var_20 = -733247291;
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
