#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5837;
short var_6 = (short)-5429;
short var_7 = (short)10165;
int var_8 = 1694840972;
int zero = 0;
unsigned short var_10 = (unsigned short)60311;
long long int var_11 = 2573582883512957370LL;
unsigned short var_12 = (unsigned short)21502;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
