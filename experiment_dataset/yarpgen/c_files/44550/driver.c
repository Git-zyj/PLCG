#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3379164954U;
int var_3 = 1994019487;
short var_5 = (short)30627;
signed char var_8 = (signed char)-4;
unsigned int var_10 = 2975540637U;
long long int var_12 = -571566744412212774LL;
unsigned short var_13 = (unsigned short)28624;
unsigned int var_15 = 2723583868U;
int zero = 0;
unsigned short var_18 = (unsigned short)51817;
unsigned int var_19 = 946309145U;
unsigned short var_20 = (unsigned short)33380;
signed char var_21 = (signed char)115;
void init() {
}

void checksum() {
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
