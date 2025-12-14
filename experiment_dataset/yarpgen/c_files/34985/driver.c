#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13650;
signed char var_1 = (signed char)31;
int var_2 = 419182084;
long long int var_5 = 6845733749120245203LL;
int var_6 = -1218872724;
unsigned short var_7 = (unsigned short)6166;
_Bool var_8 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned char var_17 = (unsigned char)146;
int zero = 0;
int var_19 = -409036141;
unsigned short var_20 = (unsigned short)31264;
unsigned long long int var_21 = 16001774950685074661ULL;
unsigned char var_22 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
