#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3556269181576304449ULL;
signed char var_2 = (signed char)75;
long long int var_6 = -7036616542295408699LL;
unsigned char var_9 = (unsigned char)30;
unsigned short var_10 = (unsigned short)44964;
signed char var_11 = (signed char)89;
long long int var_13 = 5935515248785146783LL;
int zero = 0;
unsigned short var_14 = (unsigned short)59737;
unsigned long long int var_15 = 7832434243136698229ULL;
unsigned short var_16 = (unsigned short)52449;
signed char var_17 = (signed char)22;
signed char var_18 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
