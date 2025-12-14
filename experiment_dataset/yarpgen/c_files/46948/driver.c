#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10418044142493534246ULL;
unsigned int var_1 = 4078784813U;
_Bool var_2 = (_Bool)1;
int var_3 = 318547887;
_Bool var_4 = (_Bool)0;
long long int var_5 = 389929215706328536LL;
unsigned short var_8 = (unsigned short)18272;
int zero = 0;
unsigned int var_10 = 3612633917U;
short var_11 = (short)-26539;
unsigned int var_12 = 1368569124U;
unsigned short var_13 = (unsigned short)39836;
unsigned long long int var_14 = 13621711557839196085ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
