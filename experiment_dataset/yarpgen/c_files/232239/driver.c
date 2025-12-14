#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3139627407U;
unsigned int var_1 = 242127326U;
int var_2 = 459386143;
int var_4 = -1823290270;
int var_5 = -988711424;
long long int var_6 = -7837107323272805794LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)147;
int zero = 0;
int var_10 = 9982532;
unsigned char var_11 = (unsigned char)66;
short var_12 = (short)-21981;
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
