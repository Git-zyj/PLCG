#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6550706387702492590LL;
long long int var_2 = -8513539915287936655LL;
unsigned short var_3 = (unsigned short)64659;
short var_4 = (short)17042;
short var_7 = (short)-1444;
unsigned long long int var_9 = 4086417712132820237ULL;
unsigned char var_11 = (unsigned char)227;
short var_13 = (short)-5244;
int zero = 0;
unsigned long long int var_14 = 10817363122864863654ULL;
unsigned short var_15 = (unsigned short)51652;
unsigned short var_16 = (unsigned short)7817;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
