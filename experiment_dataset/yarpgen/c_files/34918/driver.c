#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9940067621811423720ULL;
unsigned char var_1 = (unsigned char)49;
unsigned char var_2 = (unsigned char)171;
signed char var_3 = (signed char)-35;
long long int var_4 = 4458479313341143307LL;
int var_5 = 1481435501;
unsigned short var_6 = (unsigned short)30759;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 606065641U;
unsigned long long int var_9 = 4138864412654163633ULL;
unsigned char var_10 = (unsigned char)248;
signed char var_11 = (signed char)-101;
unsigned short var_12 = (unsigned short)42045;
long long int var_13 = 8999698486489142374LL;
long long int var_14 = 1433491428135068348LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -1876035533;
short var_17 = (short)14349;
unsigned long long int var_18 = 9061130268053083893ULL;
void init() {
}

void checksum() {
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
