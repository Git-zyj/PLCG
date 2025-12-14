#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3655547122932303187LL;
long long int var_2 = 4272036374366603969LL;
long long int var_3 = 1027075982573322237LL;
signed char var_6 = (signed char)-94;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)6207;
short var_10 = (short)11094;
unsigned int var_12 = 2956821027U;
int zero = 0;
signed char var_14 = (signed char)12;
long long int var_15 = -2034437979869025198LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
