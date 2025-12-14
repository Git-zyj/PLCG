#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32199;
long long int var_1 = -8348134051936117776LL;
unsigned short var_3 = (unsigned short)61361;
unsigned char var_4 = (unsigned char)157;
unsigned char var_6 = (unsigned char)158;
long long int var_8 = -3592885698534635699LL;
short var_9 = (short)-25865;
int var_11 = 476358207;
long long int var_13 = -8593709112004435900LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-66;
short var_16 = (short)-19621;
int var_17 = 206656689;
int var_18 = -598091131;
unsigned char var_19 = (unsigned char)122;
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
