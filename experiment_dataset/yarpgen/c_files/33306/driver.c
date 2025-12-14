#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 730016388U;
short var_1 = (short)-16790;
short var_2 = (short)18999;
unsigned char var_3 = (unsigned char)150;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)24158;
signed char var_6 = (signed char)13;
_Bool var_7 = (_Bool)0;
int var_8 = -729842909;
unsigned int var_9 = 102433709U;
short var_10 = (short)-23371;
signed char var_11 = (signed char)31;
unsigned int var_13 = 1685432636U;
int zero = 0;
unsigned long long int var_14 = 12020702085840009344ULL;
unsigned int var_15 = 1501128095U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
