#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = 5765979726057835424LL;
unsigned long long int var_4 = 12992440000158683201ULL;
signed char var_6 = (signed char)89;
short var_7 = (short)-3286;
int var_9 = -353823538;
unsigned char var_10 = (unsigned char)243;
short var_11 = (short)-29556;
int zero = 0;
unsigned int var_13 = 3131598065U;
unsigned int var_14 = 3075777604U;
long long int var_15 = 5179625479972995979LL;
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
