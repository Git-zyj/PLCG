#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
unsigned short var_1 = (unsigned short)26538;
unsigned long long int var_2 = 14299831275956203722ULL;
unsigned short var_3 = (unsigned short)31285;
unsigned long long int var_4 = 4444454058977600326ULL;
unsigned int var_6 = 161288952U;
unsigned long long int var_7 = 7235460552781846487ULL;
signed char var_8 = (signed char)-115;
long long int var_9 = -5991232935163415014LL;
unsigned long long int var_10 = 13888789158164007676ULL;
unsigned int var_11 = 1928562019U;
unsigned long long int var_12 = 12628443023255807651ULL;
int zero = 0;
unsigned long long int var_13 = 13833046534164502432ULL;
long long int var_14 = -3887339747404100657LL;
unsigned int var_15 = 4078268515U;
void init() {
}

void checksum() {
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
