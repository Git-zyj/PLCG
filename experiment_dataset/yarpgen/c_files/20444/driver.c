#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 970226973U;
unsigned int var_2 = 2125410431U;
unsigned char var_3 = (unsigned char)99;
unsigned int var_4 = 509321493U;
unsigned int var_5 = 2915780323U;
unsigned int var_6 = 125136903U;
short var_9 = (short)-22631;
int zero = 0;
signed char var_14 = (signed char)35;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)30017;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
