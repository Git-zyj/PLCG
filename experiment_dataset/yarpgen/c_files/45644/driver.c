#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1033333631609807920LL;
unsigned long long int var_1 = 16956586182631188926ULL;
signed char var_2 = (signed char)31;
unsigned int var_3 = 1165834525U;
signed char var_4 = (signed char)-52;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int var_7 = -1282947807;
short var_8 = (short)-15669;
unsigned int var_9 = 636350909U;
unsigned short var_10 = (unsigned short)1386;
int var_11 = 137027390;
int zero = 0;
long long int var_12 = -7796424783983758482LL;
long long int var_13 = -9015786490780876096LL;
void init() {
}

void checksum() {
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
