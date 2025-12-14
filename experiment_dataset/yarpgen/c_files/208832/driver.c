#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1918633143;
unsigned char var_3 = (unsigned char)177;
int var_4 = 671868398;
unsigned int var_5 = 3604079079U;
long long int var_7 = 3702686779962356301LL;
long long int var_8 = -1263377402047615162LL;
unsigned char var_9 = (unsigned char)131;
unsigned char var_10 = (unsigned char)227;
short var_11 = (short)23267;
signed char var_12 = (signed char)-39;
int zero = 0;
unsigned short var_14 = (unsigned short)40599;
short var_15 = (short)15404;
long long int var_16 = 535602167955069583LL;
signed char var_17 = (signed char)123;
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
