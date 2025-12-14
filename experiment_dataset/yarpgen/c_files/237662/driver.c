#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24435;
unsigned int var_1 = 960498298U;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)97;
_Bool var_4 = (_Bool)0;
int var_7 = -1475320321;
unsigned int var_9 = 1835633459U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)128;
long long int var_15 = -1448739350567744517LL;
int zero = 0;
unsigned char var_18 = (unsigned char)106;
long long int var_19 = 3878277937818581854LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
