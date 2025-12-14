#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1126361960;
int var_3 = -1321969604;
unsigned long long int var_4 = 12017728895962587916ULL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 801780749550768513LL;
short var_7 = (short)-4074;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)19171;
int zero = 0;
unsigned short var_14 = (unsigned short)45780;
unsigned int var_15 = 2846508423U;
unsigned char var_16 = (unsigned char)104;
unsigned long long int var_17 = 15127758107351896785ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
