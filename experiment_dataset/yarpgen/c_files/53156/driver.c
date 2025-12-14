#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -105515835;
signed char var_1 = (signed char)-121;
unsigned short var_2 = (unsigned short)59014;
signed char var_4 = (signed char)26;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)42214;
int var_12 = -1731683442;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8401152643637444237LL;
int var_15 = 1487791372;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7551173888813189044LL;
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
