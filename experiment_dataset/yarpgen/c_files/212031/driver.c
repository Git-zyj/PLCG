#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12884870797746654015ULL;
short var_1 = (short)-19864;
unsigned long long int var_4 = 7959056624668316090ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)136;
unsigned short var_11 = (unsigned short)12958;
unsigned long long int var_13 = 3928276156241676762ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)38;
long long int var_16 = -6274573705370344167LL;
long long int var_17 = -6673852123497998160LL;
int var_18 = -136240493;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
