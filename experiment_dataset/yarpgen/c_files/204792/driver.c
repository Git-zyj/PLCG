#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17700;
long long int var_1 = -8727029791508459138LL;
unsigned long long int var_2 = 1504578582955703014ULL;
short var_3 = (short)-19670;
unsigned short var_5 = (unsigned short)26267;
unsigned long long int var_7 = 1523027023766357754ULL;
short var_9 = (short)30211;
unsigned long long int var_11 = 15504356988812517910ULL;
int zero = 0;
int var_12 = -905759363;
long long int var_13 = 1161527334210490847LL;
long long int var_14 = 5797347910669229997LL;
unsigned char var_15 = (unsigned char)183;
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
