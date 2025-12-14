#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-17672;
unsigned long long int var_7 = 1589268134333281196ULL;
short var_9 = (short)-27298;
int zero = 0;
signed char var_10 = (signed char)-116;
int var_11 = -1905035271;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-6395;
unsigned short var_14 = (unsigned short)2282;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
