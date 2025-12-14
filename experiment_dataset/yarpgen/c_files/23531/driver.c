#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4484721775187125612LL;
unsigned long long int var_1 = 10319626689576659695ULL;
int var_7 = -1193028054;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-68;
unsigned long long int var_15 = 9753850310048419196ULL;
_Bool var_16 = (_Bool)0;
int var_17 = 1083214241;
int zero = 0;
int var_19 = 24107446;
unsigned char var_20 = (unsigned char)115;
unsigned short var_21 = (unsigned short)12307;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
