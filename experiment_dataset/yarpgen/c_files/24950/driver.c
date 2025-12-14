#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 555457790;
unsigned short var_5 = (unsigned short)27792;
unsigned short var_6 = (unsigned short)10785;
long long int var_7 = 1710717694996129247LL;
unsigned short var_9 = (unsigned short)30014;
unsigned char var_10 = (unsigned char)147;
int zero = 0;
unsigned short var_11 = (unsigned short)15417;
int var_12 = -2081711060;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
