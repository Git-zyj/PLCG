#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8459642901446292727LL;
long long int var_1 = -2730122428142804216LL;
long long int var_2 = 1966712040407511277LL;
unsigned char var_3 = (unsigned char)235;
unsigned short var_5 = (unsigned short)15949;
unsigned int var_6 = 2342988738U;
long long int var_7 = 3698816314162091914LL;
unsigned short var_9 = (unsigned short)52792;
signed char var_10 = (signed char)-31;
signed char var_11 = (signed char)92;
int zero = 0;
long long int var_12 = 5360098307559384384LL;
int var_13 = -1735204226;
short var_14 = (short)10399;
unsigned int var_15 = 3346065693U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
