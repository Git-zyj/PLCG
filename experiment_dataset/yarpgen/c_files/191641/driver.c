#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16198148802701905286ULL;
_Bool var_1 = (_Bool)1;
int var_2 = 1412154673;
unsigned short var_3 = (unsigned short)28075;
unsigned int var_4 = 3490180100U;
signed char var_5 = (signed char)-31;
unsigned long long int var_6 = 14722427587762425404ULL;
unsigned char var_7 = (unsigned char)221;
signed char var_8 = (signed char)49;
short var_9 = (short)-18926;
int zero = 0;
unsigned char var_10 = (unsigned char)173;
long long int var_11 = 5933321931882160095LL;
signed char var_12 = (signed char)-49;
unsigned long long int var_13 = 5965066684719779698ULL;
unsigned short var_14 = (unsigned short)27385;
unsigned short var_15 = (unsigned short)6468;
signed char var_16 = (signed char)-84;
short var_17 = (short)31441;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
