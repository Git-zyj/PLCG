#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17729;
unsigned char var_3 = (unsigned char)254;
int var_6 = 337208778;
long long int var_7 = -4438211746448249727LL;
long long int var_8 = -7739237578613681016LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 10183959574840726526ULL;
short var_12 = (short)18918;
int zero = 0;
long long int var_19 = -3802516720876515636LL;
long long int var_20 = 7686904790266509910LL;
void init() {
}

void checksum() {
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
