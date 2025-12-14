#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12671;
unsigned int var_3 = 19038383U;
unsigned long long int var_5 = 12670555291277792039ULL;
short var_7 = (short)16545;
unsigned long long int var_10 = 4207985153195351488ULL;
int zero = 0;
unsigned long long int var_12 = 2415911164928962804ULL;
signed char var_13 = (signed char)-94;
unsigned short var_14 = (unsigned short)2015;
void init() {
}

void checksum() {
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
