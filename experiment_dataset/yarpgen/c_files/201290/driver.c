#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -889995811864475456LL;
int var_4 = -352649313;
int var_7 = 348307067;
long long int var_10 = 1206453889131254420LL;
signed char var_12 = (signed char)-70;
long long int var_14 = 854045177827980459LL;
int zero = 0;
unsigned short var_19 = (unsigned short)58643;
unsigned short var_20 = (unsigned short)8022;
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
