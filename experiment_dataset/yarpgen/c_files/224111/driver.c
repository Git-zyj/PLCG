#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3967260957094219672ULL;
short var_3 = (short)-8254;
unsigned long long int var_8 = 7014780033306831855ULL;
unsigned long long int var_14 = 10145315532805020671ULL;
unsigned short var_15 = (unsigned short)13118;
int zero = 0;
short var_20 = (short)27598;
signed char var_21 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
