#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)73;
int var_6 = -2105880487;
long long int var_7 = 5373083018107788394LL;
unsigned short var_9 = (unsigned short)52081;
int var_11 = 732948044;
unsigned short var_12 = (unsigned short)42439;
signed char var_15 = (signed char)-116;
int zero = 0;
unsigned long long int var_17 = 285955480557760835ULL;
signed char var_18 = (signed char)95;
unsigned char var_19 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
