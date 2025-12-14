#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8051041380325898762LL;
short var_4 = (short)-12725;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-13540;
signed char var_7 = (signed char)-95;
int zero = 0;
int var_12 = 1921207363;
long long int var_13 = -3044088124575916447LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
