#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53926;
unsigned long long int var_4 = 13443390978874781240ULL;
unsigned short var_5 = (unsigned short)46588;
signed char var_6 = (signed char)42;
unsigned short var_7 = (unsigned short)50997;
unsigned int var_9 = 2473946302U;
unsigned short var_10 = (unsigned short)29983;
unsigned short var_13 = (unsigned short)57613;
unsigned int var_14 = 2788471337U;
short var_15 = (short)-10189;
int zero = 0;
signed char var_16 = (signed char)-21;
unsigned short var_17 = (unsigned short)56483;
long long int var_18 = 521370254242983529LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
