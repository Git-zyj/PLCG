#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1791284487;
unsigned char var_5 = (unsigned char)135;
int var_6 = -1931940356;
unsigned char var_8 = (unsigned char)186;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)62432;
int zero = 0;
short var_13 = (short)-11950;
long long int var_14 = 5398720448090153651LL;
unsigned char var_15 = (unsigned char)214;
unsigned long long int var_16 = 2797497282549822334ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
