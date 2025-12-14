#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -46557508;
short var_2 = (short)7975;
unsigned int var_3 = 2305624436U;
unsigned short var_4 = (unsigned short)32987;
unsigned long long int var_7 = 16665494917294182596ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_15 = -2084844162;
int var_16 = 1393326514;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
