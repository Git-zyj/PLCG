#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31643;
short var_2 = (short)-24230;
unsigned long long int var_3 = 15150704285666571836ULL;
long long int var_4 = -906783727682402481LL;
int var_8 = -733921065;
int zero = 0;
int var_10 = -707881315;
short var_11 = (short)-27159;
unsigned short var_12 = (unsigned short)56346;
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
