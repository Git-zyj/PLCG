#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -539414972;
unsigned int var_1 = 2133116276U;
long long int var_2 = -7323662056009734316LL;
unsigned int var_3 = 1564154353U;
signed char var_5 = (signed char)94;
long long int var_6 = -2039061219521549932LL;
signed char var_7 = (signed char)4;
int var_8 = -1612937452;
signed char var_10 = (signed char)99;
int zero = 0;
int var_15 = 906296678;
int var_16 = -1485269604;
int var_17 = 722226809;
int var_18 = 1365970848;
unsigned long long int var_19 = 8541327988576480935ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
