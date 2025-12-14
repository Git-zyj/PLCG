#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)92;
unsigned int var_5 = 3532481817U;
_Bool var_6 = (_Bool)0;
short var_7 = (short)27812;
int var_10 = -1440768818;
int zero = 0;
unsigned short var_11 = (unsigned short)29625;
unsigned long long int var_12 = 6226411086104219772ULL;
unsigned long long int var_13 = 7268417203752516110ULL;
void init() {
}

void checksum() {
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
