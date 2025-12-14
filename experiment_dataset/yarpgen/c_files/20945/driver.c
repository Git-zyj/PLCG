#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -827652050;
unsigned int var_2 = 1633450866U;
short var_3 = (short)-4849;
short var_6 = (short)-18879;
unsigned long long int var_7 = 3717100773615820357ULL;
short var_8 = (short)-32573;
unsigned short var_9 = (unsigned short)50552;
signed char var_11 = (signed char)-105;
_Bool var_13 = (_Bool)1;
long long int var_14 = 3568191246810414199LL;
unsigned long long int var_15 = 13370901607931399958ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -7941310144149879256LL;
short var_19 = (short)12314;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
