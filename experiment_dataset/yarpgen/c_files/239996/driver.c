#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12445382770546135803ULL;
unsigned short var_3 = (unsigned short)50315;
short var_5 = (short)-14906;
signed char var_8 = (signed char)98;
int zero = 0;
short var_11 = (short)1459;
unsigned char var_12 = (unsigned char)89;
short var_13 = (short)2468;
signed char var_14 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
