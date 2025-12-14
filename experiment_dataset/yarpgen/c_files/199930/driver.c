#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6892776661973585708LL;
unsigned long long int var_1 = 8893437103106176885ULL;
unsigned short var_3 = (unsigned short)53376;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)29400;
unsigned short var_9 = (unsigned short)33755;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)13;
unsigned short var_13 = (unsigned short)43729;
short var_14 = (short)20382;
unsigned char var_15 = (unsigned char)63;
unsigned char var_16 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
