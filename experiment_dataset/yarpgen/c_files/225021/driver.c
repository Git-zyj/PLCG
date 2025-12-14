#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27186;
long long int var_2 = -5172841467664055749LL;
_Bool var_5 = (_Bool)1;
long long int var_8 = 5544706379730795053LL;
signed char var_9 = (signed char)-62;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 17846308686459677275ULL;
signed char var_14 = (signed char)3;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)179;
void init() {
}

void checksum() {
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
