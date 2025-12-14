#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21531;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)-30;
int var_7 = -2117230073;
unsigned short var_8 = (unsigned short)15318;
unsigned short var_9 = (unsigned short)42752;
int zero = 0;
unsigned long long int var_10 = 6585860243392596738ULL;
signed char var_11 = (signed char)37;
int var_12 = -395216731;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
