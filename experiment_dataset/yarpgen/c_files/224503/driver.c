#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39097;
signed char var_3 = (signed char)22;
short var_10 = (short)445;
unsigned char var_11 = (unsigned char)231;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 13256529756743576029ULL;
unsigned char var_16 = (unsigned char)30;
unsigned long long int var_17 = 18212415098353225771ULL;
int var_18 = 2061720111;
unsigned short var_19 = (unsigned short)29253;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
