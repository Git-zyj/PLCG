#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4312;
unsigned long long int var_3 = 5724268458093505510ULL;
unsigned int var_4 = 1926150693U;
unsigned int var_7 = 2246179525U;
short var_9 = (short)-24632;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)30557;
int var_12 = -84585875;
unsigned int var_13 = 863714355U;
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
