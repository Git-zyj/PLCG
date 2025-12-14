#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6984074964014824872LL;
unsigned char var_1 = (unsigned char)102;
short var_3 = (short)-30103;
unsigned long long int var_4 = 15225865148776719525ULL;
unsigned char var_8 = (unsigned char)36;
int var_10 = -447954483;
unsigned short var_13 = (unsigned short)1238;
int zero = 0;
int var_14 = -529532387;
_Bool var_15 = (_Bool)1;
long long int var_16 = 5866402543844886012LL;
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
