#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)240;
int var_4 = 249109118;
unsigned int var_6 = 1876614800U;
long long int var_7 = -3530554971873581696LL;
long long int var_8 = 5611747025111301016LL;
_Bool var_10 = (_Bool)1;
long long int var_12 = -1182948421786236379LL;
unsigned char var_13 = (unsigned char)51;
short var_15 = (short)13091;
signed char var_18 = (signed char)-78;
int zero = 0;
int var_19 = 1384192801;
short var_20 = (short)8070;
unsigned char var_21 = (unsigned char)34;
_Bool var_22 = (_Bool)0;
long long int var_23 = -5729326001695286124LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
