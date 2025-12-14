#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 735714610;
unsigned char var_1 = (unsigned char)252;
unsigned long long int var_2 = 7589385451862844500ULL;
int var_3 = -1737253561;
_Bool var_4 = (_Bool)0;
long long int var_5 = 3669180181695887576LL;
unsigned int var_7 = 1744971091U;
signed char var_8 = (signed char)18;
unsigned short var_9 = (unsigned short)30351;
unsigned char var_11 = (unsigned char)131;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2379121023U;
signed char var_14 = (signed char)7;
unsigned short var_15 = (unsigned short)43429;
unsigned short var_16 = (unsigned short)38481;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
