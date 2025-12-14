#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2920907522936082690LL;
unsigned short var_4 = (unsigned short)21124;
int var_5 = -324986488;
unsigned short var_9 = (unsigned short)15769;
_Bool var_11 = (_Bool)0;
short var_18 = (short)-1811;
int var_19 = 1058717853;
int zero = 0;
long long int var_20 = 4165483421536016472LL;
unsigned long long int var_21 = 15899437317942659299ULL;
unsigned char var_22 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
