#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)175;
long long int var_2 = -6645652058626901519LL;
long long int var_5 = 890194571375939421LL;
unsigned char var_8 = (unsigned char)144;
int var_10 = 1952458362;
_Bool var_12 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 1064474623313257697ULL;
int zero = 0;
int var_19 = 2131114564;
long long int var_20 = 816851094315398136LL;
short var_21 = (short)14838;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
