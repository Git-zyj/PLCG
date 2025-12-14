#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
short var_4 = (short)-8828;
unsigned char var_5 = (unsigned char)239;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2618923879U;
int var_9 = 1717926806;
int zero = 0;
unsigned short var_12 = (unsigned short)21103;
long long int var_13 = -5958721385864629090LL;
short var_14 = (short)-25349;
void init() {
}

void checksum() {
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
