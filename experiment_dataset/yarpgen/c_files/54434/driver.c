#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)210;
signed char var_2 = (signed char)-123;
short var_3 = (short)-2550;
unsigned long long int var_5 = 1549923333793357244ULL;
unsigned char var_13 = (unsigned char)41;
long long int var_14 = 3481852147368344731LL;
int zero = 0;
signed char var_19 = (signed char)0;
signed char var_20 = (signed char)-49;
void init() {
}

void checksum() {
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
