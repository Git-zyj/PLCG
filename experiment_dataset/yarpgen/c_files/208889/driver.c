#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3005129985U;
long long int var_1 = -8956049226502510831LL;
unsigned short var_5 = (unsigned short)19640;
int var_6 = 1018032074;
unsigned long long int var_8 = 13349390353592349828ULL;
int var_9 = -1185921642;
unsigned long long int var_10 = 7904464671508240871ULL;
short var_14 = (short)-9017;
int var_16 = 1361272746;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 2673883863862612148ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
