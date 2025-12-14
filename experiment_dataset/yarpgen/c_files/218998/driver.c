#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1564026477;
signed char var_1 = (signed char)110;
unsigned char var_2 = (unsigned char)247;
_Bool var_5 = (_Bool)0;
short var_6 = (short)22786;
int zero = 0;
unsigned int var_13 = 124411380U;
long long int var_14 = -2534804995926580239LL;
signed char var_15 = (signed char)-61;
unsigned long long int var_16 = 14475173141709921716ULL;
void init() {
}

void checksum() {
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
