#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1523041190;
short var_2 = (short)15817;
short var_3 = (short)-24047;
int var_5 = 830141539;
int var_6 = -751361426;
int var_7 = 1262860589;
unsigned short var_8 = (unsigned short)17251;
unsigned int var_9 = 100139778U;
int var_10 = -1923585368;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 1176601574;
unsigned char var_13 = (unsigned char)172;
unsigned long long int var_14 = 10823934770326159877ULL;
int var_15 = 2123438026;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
