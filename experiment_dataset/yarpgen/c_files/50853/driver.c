#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13056;
short var_3 = (short)-30543;
long long int var_7 = -6091211337865686451LL;
short var_9 = (short)17027;
int var_10 = -327259789;
short var_11 = (short)18886;
short var_13 = (short)16055;
int zero = 0;
int var_14 = -1122933034;
long long int var_15 = 6697515263058770066LL;
short var_16 = (short)28734;
int var_17 = 1175480568;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
