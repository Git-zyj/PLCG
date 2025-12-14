#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1742610173U;
signed char var_2 = (signed char)80;
unsigned int var_6 = 983543031U;
long long int var_7 = -6445015915039825682LL;
signed char var_9 = (signed char)-64;
int var_10 = 1538250724;
short var_12 = (short)-25825;
_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 9765347845031041409ULL;
int zero = 0;
int var_20 = -446552463;
unsigned long long int var_21 = 8803034366103620445ULL;
unsigned short var_22 = (unsigned short)465;
unsigned char var_23 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
