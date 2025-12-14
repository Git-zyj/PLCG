#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -268875545;
unsigned short var_2 = (unsigned short)57816;
int var_4 = -1601377710;
unsigned int var_7 = 950114750U;
short var_8 = (short)31375;
int var_10 = -414504466;
unsigned long long int var_11 = 5332759518372070098ULL;
unsigned char var_14 = (unsigned char)35;
unsigned char var_15 = (unsigned char)74;
int zero = 0;
unsigned long long int var_17 = 9388327688262474380ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
