#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7449746214039725961ULL;
_Bool var_5 = (_Bool)0;
long long int var_8 = -363393561885021595LL;
int var_11 = 1572579022;
unsigned char var_12 = (unsigned char)229;
long long int var_16 = 1522294010122635063LL;
long long int var_19 = 1926376534411088626LL;
int zero = 0;
unsigned int var_20 = 1622694880U;
short var_21 = (short)-4801;
int var_22 = 1339523422;
unsigned char var_23 = (unsigned char)110;
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
