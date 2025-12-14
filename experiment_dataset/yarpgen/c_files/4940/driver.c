#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 89184244U;
short var_2 = (short)-14822;
unsigned long long int var_3 = 7250193068730032970ULL;
long long int var_4 = 8560693126506168205LL;
unsigned char var_10 = (unsigned char)174;
signed char var_14 = (signed char)-20;
unsigned short var_15 = (unsigned short)50175;
unsigned short var_16 = (unsigned short)61283;
int zero = 0;
signed char var_17 = (signed char)-16;
int var_18 = -954621144;
long long int var_19 = -481246389981323371LL;
unsigned long long int var_20 = 14424731647781317355ULL;
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
