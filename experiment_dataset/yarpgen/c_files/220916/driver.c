#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2186114293277712889LL;
unsigned int var_8 = 1700201200U;
unsigned long long int var_9 = 11521156649496648834ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)12710;
signed char var_15 = (signed char)-101;
unsigned short var_16 = (unsigned short)7138;
unsigned char var_17 = (unsigned char)251;
_Bool var_18 = (_Bool)1;
int var_19 = 1392085866;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
