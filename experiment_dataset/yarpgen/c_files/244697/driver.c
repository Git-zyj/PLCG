#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1899027025U;
long long int var_4 = 842514760578535300LL;
int var_7 = 1424884427;
int var_8 = 331532895;
int var_9 = 1776393342;
long long int var_10 = 2249469384506204146LL;
unsigned short var_11 = (unsigned short)30734;
int zero = 0;
int var_14 = -143506553;
short var_15 = (short)18085;
unsigned short var_16 = (unsigned short)10180;
int var_17 = 1989400437;
signed char var_18 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
