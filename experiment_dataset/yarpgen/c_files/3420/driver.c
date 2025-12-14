#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64067;
unsigned short var_5 = (unsigned short)58558;
unsigned long long int var_6 = 140963044142084309ULL;
int var_8 = 207271013;
unsigned short var_9 = (unsigned short)17513;
int zero = 0;
short var_10 = (short)20905;
unsigned long long int var_11 = 11286808424667915655ULL;
unsigned short var_12 = (unsigned short)1405;
unsigned short var_13 = (unsigned short)23632;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
