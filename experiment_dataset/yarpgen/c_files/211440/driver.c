#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6914;
long long int var_1 = 1601814519902667469LL;
long long int var_4 = -1207888334233203847LL;
int var_6 = 1589299016;
int var_8 = 640353077;
signed char var_9 = (signed char)-42;
int zero = 0;
unsigned short var_10 = (unsigned short)25152;
signed char var_11 = (signed char)-100;
unsigned int var_12 = 2533888096U;
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
