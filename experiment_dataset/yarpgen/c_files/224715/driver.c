#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22259;
signed char var_2 = (signed char)-95;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2634918514U;
int zero = 0;
unsigned char var_12 = (unsigned char)156;
short var_13 = (short)13461;
void init() {
}

void checksum() {
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
