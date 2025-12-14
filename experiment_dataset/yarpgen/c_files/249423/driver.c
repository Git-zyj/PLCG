#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17550;
signed char var_1 = (signed char)-18;
_Bool var_3 = (_Bool)1;
long long int var_7 = -2292014916942482455LL;
unsigned short var_10 = (unsigned short)57840;
short var_11 = (short)7666;
short var_13 = (short)-23024;
int var_14 = 1846967902;
int zero = 0;
int var_17 = -1225661213;
signed char var_18 = (signed char)115;
unsigned int var_19 = 3326000752U;
signed char var_20 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
