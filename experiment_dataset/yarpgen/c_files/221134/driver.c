#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16038;
_Bool var_2 = (_Bool)1;
long long int var_3 = -7858827550730698467LL;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)62165;
long long int var_7 = -4704636058364183506LL;
unsigned short var_9 = (unsigned short)56312;
int var_10 = -1357749831;
unsigned long long int var_11 = 738070447522131258ULL;
int zero = 0;
unsigned long long int var_12 = 12238248729933238008ULL;
short var_13 = (short)21217;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 643707241U;
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
