#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
short var_1 = (short)2626;
signed char var_2 = (signed char)124;
short var_3 = (short)25193;
signed char var_4 = (signed char)59;
int var_5 = 666244283;
signed char var_7 = (signed char)-16;
short var_9 = (short)5082;
int zero = 0;
unsigned long long int var_10 = 17440636061213219240ULL;
unsigned long long int var_11 = 17247403250413032068ULL;
signed char var_12 = (signed char)1;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
