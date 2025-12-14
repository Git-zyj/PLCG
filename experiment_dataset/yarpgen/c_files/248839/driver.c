#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)65;
int var_4 = -1655485365;
long long int var_8 = 5212008131047910635LL;
long long int var_10 = 6385469210175241804LL;
int var_14 = -1653042380;
unsigned short var_16 = (unsigned short)1224;
int zero = 0;
long long int var_18 = 7595262338103968766LL;
unsigned short var_19 = (unsigned short)31863;
long long int var_20 = -3769608305992108338LL;
unsigned short var_21 = (unsigned short)13799;
unsigned char var_22 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
