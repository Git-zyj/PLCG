#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -319548276891120815LL;
short var_2 = (short)-1630;
signed char var_6 = (signed char)-18;
unsigned int var_7 = 2348835021U;
int var_10 = -729986272;
int zero = 0;
signed char var_11 = (signed char)-76;
short var_12 = (short)-6945;
void init() {
}

void checksum() {
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
