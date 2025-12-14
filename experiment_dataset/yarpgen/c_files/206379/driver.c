#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2929600124U;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)13;
unsigned short var_10 = (unsigned short)31180;
short var_12 = (short)-20216;
unsigned char var_13 = (unsigned char)11;
unsigned short var_15 = (unsigned short)36063;
unsigned long long int var_19 = 15094515548499426932ULL;
int zero = 0;
long long int var_20 = -3345505888600756332LL;
long long int var_21 = 4692905928452154018LL;
unsigned char var_22 = (unsigned char)144;
unsigned short var_23 = (unsigned short)4370;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
