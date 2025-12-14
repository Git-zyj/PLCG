#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10212;
long long int var_8 = -8848539391216432136LL;
int var_11 = -1903950286;
unsigned char var_14 = (unsigned char)22;
unsigned char var_15 = (unsigned char)100;
int zero = 0;
signed char var_18 = (signed char)-28;
signed char var_19 = (signed char)41;
void init() {
}

void checksum() {
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
