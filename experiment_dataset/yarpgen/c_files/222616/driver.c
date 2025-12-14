#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1853081746U;
signed char var_2 = (signed char)-106;
long long int var_3 = 1069820669468435404LL;
int var_4 = 734968156;
unsigned long long int var_5 = 3384876427505017790ULL;
unsigned long long int var_9 = 849972844256570267ULL;
unsigned int var_10 = 3102150116U;
_Bool var_11 = (_Bool)0;
long long int var_13 = -2092992421857274650LL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)27948;
unsigned char var_16 = (unsigned char)160;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 1376239066;
short var_19 = (short)11589;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
