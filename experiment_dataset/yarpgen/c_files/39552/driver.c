#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-115;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)205;
unsigned long long int var_5 = 9231361496277034495ULL;
unsigned short var_6 = (unsigned short)22817;
short var_9 = (short)-25769;
int var_10 = -473509409;
signed char var_11 = (signed char)3;
unsigned short var_13 = (unsigned short)12114;
long long int var_14 = -7635203794138883780LL;
signed char var_15 = (signed char)-21;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-101;
short var_19 = (short)-30112;
unsigned long long int var_20 = 4292773212857396128ULL;
short var_21 = (short)-26665;
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
