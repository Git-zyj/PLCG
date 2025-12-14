#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8829587376122421989LL;
unsigned short var_2 = (unsigned short)11641;
unsigned char var_3 = (unsigned char)240;
unsigned long long int var_4 = 13855874290982596247ULL;
unsigned long long int var_5 = 9639490090810679102ULL;
long long int var_6 = 2095700228171888606LL;
unsigned char var_8 = (unsigned char)85;
unsigned char var_10 = (unsigned char)250;
unsigned short var_11 = (unsigned short)16362;
unsigned char var_12 = (unsigned char)250;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-70;
unsigned long long int var_15 = 18089875017314619328ULL;
void init() {
}

void checksum() {
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
