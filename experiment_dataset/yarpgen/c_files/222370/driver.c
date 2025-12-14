#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -4981330486487521036LL;
short var_11 = (short)-31478;
unsigned char var_15 = (unsigned char)227;
signed char var_17 = (signed char)-107;
int zero = 0;
unsigned char var_18 = (unsigned char)115;
short var_19 = (short)5960;
int var_20 = 1892195911;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
