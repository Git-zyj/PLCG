#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3849190664U;
unsigned long long int var_1 = 7945921207298256817ULL;
short var_3 = (short)-25047;
unsigned char var_5 = (unsigned char)13;
unsigned short var_6 = (unsigned short)45371;
unsigned long long int var_7 = 7452579447969072884ULL;
unsigned char var_8 = (unsigned char)172;
long long int var_9 = 8742473635922887428LL;
unsigned long long int var_10 = 18216148449891874033ULL;
long long int var_11 = -4562779030549066576LL;
int zero = 0;
unsigned long long int var_12 = 5223555165782984325ULL;
short var_13 = (short)-25723;
signed char var_14 = (signed char)119;
unsigned long long int var_15 = 11504343965470225765ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
