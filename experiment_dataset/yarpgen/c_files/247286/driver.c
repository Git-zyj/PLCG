#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)97;
unsigned int var_6 = 3640117266U;
unsigned short var_8 = (unsigned short)54403;
signed char var_9 = (signed char)-122;
unsigned int var_10 = 1444325963U;
signed char var_11 = (signed char)-96;
unsigned long long int var_17 = 10668582417193811040ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)16814;
short var_21 = (short)13303;
unsigned short var_22 = (unsigned short)40194;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
