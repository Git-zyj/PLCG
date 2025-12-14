#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2300953046U;
int var_2 = 534568702;
long long int var_5 = 4693260813826375236LL;
unsigned int var_6 = 3139684762U;
long long int var_7 = 5728417016411749945LL;
unsigned long long int var_10 = 11905595222751257059ULL;
unsigned long long int var_12 = 14455977675988731040ULL;
_Bool var_14 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)169;
int var_20 = -1619319031;
short var_21 = (short)2026;
short var_22 = (short)7509;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
