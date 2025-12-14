#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39587;
unsigned int var_1 = 3501509949U;
short var_2 = (short)10864;
unsigned short var_3 = (unsigned short)3603;
long long int var_7 = -4583824108864792343LL;
long long int var_8 = -3011096426695292727LL;
unsigned short var_9 = (unsigned short)5021;
unsigned short var_10 = (unsigned short)31830;
int zero = 0;
unsigned short var_11 = (unsigned short)14008;
long long int var_12 = 9208985608607648576LL;
unsigned short var_13 = (unsigned short)56521;
unsigned long long int var_14 = 15041951738080441493ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
