#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3471227400221636492LL;
_Bool var_5 = (_Bool)1;
short var_7 = (short)423;
unsigned int var_8 = 2267458403U;
int var_11 = -2025364557;
int zero = 0;
short var_14 = (short)-26998;
int var_15 = -2114862361;
short var_16 = (short)-24322;
unsigned short var_17 = (unsigned short)59482;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
