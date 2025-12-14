#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31381;
int var_1 = 179964832;
unsigned long long int var_4 = 12342749188105558884ULL;
long long int var_5 = -5327544859768878305LL;
unsigned short var_6 = (unsigned short)48277;
int var_7 = 1479654881;
signed char var_10 = (signed char)5;
short var_11 = (short)28399;
int zero = 0;
short var_13 = (short)29730;
unsigned char var_14 = (unsigned char)166;
unsigned long long int var_15 = 7277171214611996286ULL;
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
