#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2116379367;
signed char var_3 = (signed char)-60;
unsigned short var_4 = (unsigned short)35141;
long long int var_7 = -5045464629899698708LL;
int var_11 = 1808392855;
short var_12 = (short)-9119;
int zero = 0;
unsigned int var_13 = 3372040552U;
int var_14 = 1505038368;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
