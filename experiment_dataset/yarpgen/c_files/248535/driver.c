#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
long long int var_3 = 1776131003488546609LL;
unsigned short var_5 = (unsigned short)51233;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 11841775764825898154ULL;
unsigned char var_8 = (unsigned char)138;
unsigned short var_9 = (unsigned short)17174;
unsigned short var_11 = (unsigned short)30741;
int var_12 = -765508266;
signed char var_13 = (signed char)(-127 - 1);
signed char var_14 = (signed char)79;
int zero = 0;
long long int var_15 = 7180828446449186399LL;
unsigned long long int var_16 = 7950941212805861158ULL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
