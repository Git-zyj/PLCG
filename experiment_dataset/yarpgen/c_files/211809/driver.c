#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2464898051182278176LL;
short var_2 = (short)9258;
short var_4 = (short)16155;
unsigned int var_5 = 3203048078U;
signed char var_6 = (signed char)-70;
short var_7 = (short)-3226;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-99;
long long int var_10 = -7584889361931289839LL;
unsigned int var_11 = 2544142522U;
unsigned short var_12 = (unsigned short)34907;
signed char var_13 = (signed char)106;
int var_14 = 445402864;
signed char var_15 = (signed char)-104;
int var_16 = 1212526982;
unsigned int var_17 = 2045927070U;
unsigned int var_18 = 391371987U;
int var_19 = -708125043;
int zero = 0;
short var_20 = (short)8642;
unsigned long long int var_21 = 8677445880793532526ULL;
unsigned char var_22 = (unsigned char)2;
short var_23 = (short)28159;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
