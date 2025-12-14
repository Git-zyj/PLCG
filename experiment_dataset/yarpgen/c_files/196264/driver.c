#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11347641265125386424ULL;
unsigned char var_1 = (unsigned char)250;
_Bool var_2 = (_Bool)0;
int var_3 = 1204608848;
signed char var_4 = (signed char)41;
unsigned char var_5 = (unsigned char)47;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)65;
short var_11 = (short)-18422;
unsigned int var_12 = 2081946809U;
int zero = 0;
long long int var_13 = -1250680278971543570LL;
signed char var_14 = (signed char)-16;
unsigned short var_15 = (unsigned short)4428;
signed char var_16 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
