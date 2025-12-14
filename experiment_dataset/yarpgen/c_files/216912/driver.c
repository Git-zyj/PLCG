#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
signed char var_4 = (signed char)-34;
short var_6 = (short)-5780;
unsigned long long int var_7 = 2468436233264100064ULL;
long long int var_8 = -8191511206049633187LL;
signed char var_9 = (signed char)-107;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)12737;
int var_12 = -1787174630;
short var_13 = (short)-113;
short var_14 = (short)-28448;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
