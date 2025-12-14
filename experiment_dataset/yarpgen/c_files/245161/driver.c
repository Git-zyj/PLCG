#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8309106394585080091LL;
unsigned char var_2 = (unsigned char)5;
_Bool var_3 = (_Bool)1;
long long int var_4 = -5607369517246224669LL;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)167;
unsigned short var_10 = (unsigned short)3221;
unsigned short var_11 = (unsigned short)50653;
unsigned short var_12 = (unsigned short)3137;
_Bool var_15 = (_Bool)1;
int var_17 = 1401311254;
unsigned short var_18 = (unsigned short)53344;
int zero = 0;
unsigned int var_19 = 3774132228U;
long long int var_20 = 5950440647209972621LL;
_Bool var_21 = (_Bool)0;
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
