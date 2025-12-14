#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27483;
unsigned short var_2 = (unsigned short)36870;
_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 14768392631254671898ULL;
int var_8 = 907160181;
int var_10 = -1513027568;
_Bool var_13 = (_Bool)1;
signed char var_16 = (signed char)-117;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)17523;
unsigned int var_19 = 2382906442U;
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
