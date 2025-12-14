#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3665021579050963689LL;
unsigned long long int var_7 = 13702942144742355842ULL;
short var_10 = (short)-2915;
unsigned long long int var_14 = 10289775654004397425ULL;
int zero = 0;
signed char var_15 = (signed char)-55;
signed char var_16 = (signed char)-43;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
