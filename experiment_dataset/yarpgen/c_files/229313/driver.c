#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61688;
short var_3 = (short)12674;
unsigned long long int var_5 = 6465844591378910628ULL;
unsigned char var_6 = (unsigned char)197;
unsigned char var_8 = (unsigned char)116;
int var_9 = 1742445208;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)64;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -7086749471902068944LL;
signed char var_17 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
