#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-122;
long long int var_5 = -8629950006839964394LL;
unsigned long long int var_7 = 16198651635324579060ULL;
unsigned long long int var_9 = 893697174547570787ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)39283;
unsigned char var_14 = (unsigned char)145;
unsigned long long int var_15 = 17936127921255295523ULL;
void init() {
}

void checksum() {
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
