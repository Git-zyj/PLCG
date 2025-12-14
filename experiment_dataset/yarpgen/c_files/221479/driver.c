#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6694292671911893557LL;
unsigned short var_3 = (unsigned short)26618;
_Bool var_5 = (_Bool)0;
short var_6 = (short)8997;
short var_10 = (short)11997;
int var_11 = -1464800494;
unsigned long long int var_13 = 11985121267393084164ULL;
long long int var_16 = 6504009663303207621LL;
int zero = 0;
unsigned int var_17 = 3552723859U;
unsigned short var_18 = (unsigned short)58882;
unsigned int var_19 = 2483425333U;
unsigned char var_20 = (unsigned char)104;
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
