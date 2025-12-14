#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1241905840;
signed char var_1 = (signed char)52;
long long int var_2 = 4823907869645519410LL;
unsigned int var_6 = 4252964864U;
int var_7 = -352903064;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-6935;
unsigned char var_10 = (unsigned char)201;
signed char var_14 = (signed char)-41;
unsigned char var_15 = (unsigned char)22;
long long int var_18 = -888296361436805534LL;
int zero = 0;
unsigned char var_19 = (unsigned char)91;
unsigned char var_20 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
