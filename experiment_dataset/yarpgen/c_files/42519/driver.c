#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45628;
unsigned short var_1 = (unsigned short)50324;
long long int var_5 = -7424416823636113281LL;
signed char var_8 = (signed char)-61;
unsigned short var_9 = (unsigned short)62679;
int zero = 0;
unsigned long long int var_12 = 5484525813479545846ULL;
unsigned long long int var_13 = 4600929748840517410ULL;
unsigned int var_14 = 710890514U;
unsigned long long int var_15 = 9710819231001752336ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
