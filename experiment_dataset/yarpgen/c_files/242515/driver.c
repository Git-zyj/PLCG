#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3174444841028475892LL;
unsigned short var_2 = (unsigned short)62930;
signed char var_3 = (signed char)-70;
short var_4 = (short)728;
unsigned int var_5 = 4070309882U;
short var_7 = (short)-7808;
signed char var_9 = (signed char)-51;
int zero = 0;
unsigned long long int var_10 = 5785068981139697539ULL;
unsigned short var_11 = (unsigned short)3575;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
