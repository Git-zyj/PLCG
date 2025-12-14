#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2844783077592780327LL;
short var_1 = (short)-6812;
unsigned long long int var_2 = 13951209007325002646ULL;
long long int var_3 = -8262953194529842053LL;
unsigned short var_4 = (unsigned short)24660;
short var_6 = (short)-24531;
unsigned long long int var_7 = 16833764871893044968ULL;
_Bool var_8 = (_Bool)1;
int var_10 = 371300779;
int var_11 = -369395690;
int var_12 = -1991668409;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-31824;
short var_15 = (short)-5358;
unsigned short var_16 = (unsigned short)14838;
short var_17 = (short)-28583;
unsigned long long int var_18 = 16652988647433788868ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
