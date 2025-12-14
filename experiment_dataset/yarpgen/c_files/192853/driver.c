#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)90;
_Bool var_4 = (_Bool)0;
long long int var_5 = 3454269102017599886LL;
unsigned long long int var_7 = 15435912846450661037ULL;
_Bool var_10 = (_Bool)1;
int var_11 = -642406769;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)47459;
int var_14 = 1970889473;
unsigned short var_15 = (unsigned short)8586;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
