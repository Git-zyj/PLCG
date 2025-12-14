#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)37;
unsigned long long int var_5 = 9626049068853168989ULL;
short var_8 = (short)12487;
int zero = 0;
unsigned long long int var_10 = 105271608989796825ULL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-94;
unsigned long long int var_13 = 14374483796251280652ULL;
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
