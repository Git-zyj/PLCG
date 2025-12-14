#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1646840764110110614LL;
unsigned char var_6 = (unsigned char)215;
long long int var_7 = -8489007379040445443LL;
unsigned long long int var_8 = 14434262426409008008ULL;
int zero = 0;
signed char var_11 = (signed char)4;
unsigned long long int var_12 = 16278461015965476134ULL;
unsigned long long int var_13 = 170486080209890337ULL;
unsigned short var_14 = (unsigned short)42630;
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
