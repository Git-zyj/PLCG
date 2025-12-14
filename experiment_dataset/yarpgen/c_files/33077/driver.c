#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)107;
signed char var_6 = (signed char)91;
unsigned short var_7 = (unsigned short)32935;
_Bool var_9 = (_Bool)1;
long long int var_10 = 8191242339149422397LL;
unsigned char var_11 = (unsigned char)59;
long long int var_12 = -3129236253505430183LL;
unsigned int var_13 = 2315201200U;
int zero = 0;
int var_15 = 2066914887;
long long int var_16 = 1012614164895382632LL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
