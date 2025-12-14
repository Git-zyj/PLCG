#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7406;
long long int var_2 = 2553833523526081328LL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-5303;
int var_9 = 2095316090;
unsigned char var_10 = (unsigned char)65;
int var_12 = 1385122464;
int var_14 = 1673323588;
int zero = 0;
short var_16 = (short)21425;
unsigned char var_17 = (unsigned char)146;
unsigned char var_18 = (unsigned char)192;
unsigned long long int var_19 = 17127962881798024816ULL;
unsigned char var_20 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
