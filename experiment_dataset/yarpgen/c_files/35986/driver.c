#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1574248810;
short var_2 = (short)-20477;
short var_3 = (short)30309;
unsigned long long int var_4 = 818417987166930339ULL;
_Bool var_5 = (_Bool)0;
int var_8 = -1521979949;
long long int var_9 = 59160821305091733LL;
int zero = 0;
unsigned long long int var_10 = 8506648389823226036ULL;
int var_11 = -1595134392;
unsigned short var_12 = (unsigned short)13162;
unsigned char var_13 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
