#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50891;
unsigned int var_3 = 422701991U;
unsigned short var_6 = (unsigned short)3019;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)68;
long long int var_12 = 4723218964365719871LL;
short var_13 = (short)15239;
unsigned long long int var_15 = 6596234594218493097ULL;
unsigned short var_17 = (unsigned short)21742;
int zero = 0;
unsigned short var_20 = (unsigned short)13823;
unsigned short var_21 = (unsigned short)17230;
_Bool var_22 = (_Bool)0;
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
