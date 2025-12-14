#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 782508162005790181LL;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_8 = -9198068065741724945LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
long long int var_11 = 5288101091886090904LL;
short var_12 = (short)8531;
unsigned char var_13 = (unsigned char)198;
_Bool var_14 = (_Bool)0;
long long int var_16 = 8403800642427094811LL;
int zero = 0;
unsigned int var_20 = 106053507U;
long long int var_21 = 6334189626065524437LL;
unsigned int var_22 = 3457487033U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
