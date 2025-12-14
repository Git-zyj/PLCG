#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)187;
unsigned long long int var_5 = 12780289160528636312ULL;
long long int var_6 = 1305997218377860932LL;
signed char var_7 = (signed char)-20;
unsigned char var_8 = (unsigned char)111;
signed char var_10 = (signed char)-5;
unsigned long long int var_12 = 9326712719744223636ULL;
unsigned long long int var_13 = 11256484674958911384ULL;
unsigned char var_14 = (unsigned char)124;
long long int var_15 = -4875678988628277689LL;
unsigned long long int var_16 = 15776097448188739284ULL;
unsigned long long int var_17 = 8350279080412172961ULL;
signed char var_18 = (signed char)-25;
int zero = 0;
unsigned char var_20 = (unsigned char)151;
short var_21 = (short)-10615;
unsigned long long int var_22 = 6744085601651611304ULL;
long long int var_23 = 1999041350556123280LL;
unsigned long long int var_24 = 8496335363306165642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
