#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)89;
int var_3 = 1549262370;
unsigned int var_4 = 188465085U;
unsigned int var_6 = 2629544257U;
int var_10 = -1675431507;
unsigned long long int var_12 = 17607580317545330528ULL;
int zero = 0;
short var_13 = (short)-12110;
unsigned int var_14 = 3906293551U;
_Bool var_15 = (_Bool)1;
int var_16 = 1308236326;
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
