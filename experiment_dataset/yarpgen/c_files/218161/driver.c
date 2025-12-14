#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58223;
short var_2 = (short)32203;
unsigned int var_4 = 2247751027U;
unsigned char var_6 = (unsigned char)223;
unsigned char var_8 = (unsigned char)167;
signed char var_9 = (signed char)45;
long long int var_10 = -5641323117988878063LL;
int zero = 0;
unsigned int var_12 = 2091297211U;
int var_13 = 1491671336;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1489931533U;
void init() {
}

void checksum() {
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
