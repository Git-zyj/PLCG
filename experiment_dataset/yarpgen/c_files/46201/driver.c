#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)12;
short var_3 = (short)8797;
short var_6 = (short)-20070;
unsigned long long int var_7 = 15080758272339166838ULL;
unsigned int var_9 = 2628307743U;
short var_14 = (short)29446;
int zero = 0;
signed char var_17 = (signed char)-73;
unsigned int var_18 = 737612252U;
unsigned int var_19 = 852783145U;
signed char var_20 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
