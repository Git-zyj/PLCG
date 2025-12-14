#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)100;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)133;
unsigned int var_4 = 540817078U;
int var_5 = -741792418;
unsigned int var_6 = 2910463253U;
unsigned char var_7 = (unsigned char)65;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_10 = 1505451375;
int var_11 = -1879705999;
int var_12 = 905541764;
int zero = 0;
unsigned char var_13 = (unsigned char)216;
long long int var_14 = 8917644914717717912LL;
long long int var_15 = 8931034363468936177LL;
int var_16 = -1233399009;
unsigned int var_17 = 67948337U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
