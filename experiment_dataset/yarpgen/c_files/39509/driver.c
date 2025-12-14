#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63262;
unsigned char var_4 = (unsigned char)172;
long long int var_5 = 5046915962298574211LL;
short var_6 = (short)-6049;
int var_7 = -163675972;
int var_8 = -571078692;
unsigned long long int var_10 = 8141038128355524391ULL;
short var_11 = (short)-28881;
unsigned short var_12 = (unsigned short)8388;
int zero = 0;
long long int var_14 = 8415136194499553882LL;
int var_15 = -1473631622;
long long int var_16 = -764669398011655146LL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
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
