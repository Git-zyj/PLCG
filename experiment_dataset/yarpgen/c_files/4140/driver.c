#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1019850825;
signed char var_5 = (signed char)-67;
int var_6 = -330092326;
int var_7 = -1661391612;
int var_11 = 1610820802;
long long int var_12 = 5070093889316841257LL;
unsigned short var_13 = (unsigned short)24440;
unsigned long long int var_14 = 15754141190795768470ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)30504;
int var_18 = 556160036;
void init() {
}

void checksum() {
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
