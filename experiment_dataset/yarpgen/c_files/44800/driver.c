#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -755575827035116434LL;
signed char var_1 = (signed char)-114;
unsigned short var_3 = (unsigned short)50620;
long long int var_4 = 9046326137867581195LL;
unsigned char var_6 = (unsigned char)152;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)45;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-14;
unsigned long long int var_16 = 6655190318202204921ULL;
signed char var_17 = (signed char)-49;
short var_18 = (short)-15394;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
