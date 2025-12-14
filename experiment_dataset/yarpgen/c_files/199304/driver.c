#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7880954503048091387LL;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)35;
long long int var_6 = -6166707886829016619LL;
unsigned int var_7 = 2679544046U;
long long int var_9 = 8493999153438714203LL;
unsigned short var_10 = (unsigned short)43043;
short var_14 = (short)-8966;
unsigned int var_16 = 1804652716U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)193;
unsigned int var_21 = 3858586760U;
_Bool var_22 = (_Bool)0;
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
