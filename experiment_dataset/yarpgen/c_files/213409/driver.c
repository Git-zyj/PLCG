#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1309849266947793717LL;
short var_1 = (short)10030;
int var_2 = -976798257;
long long int var_3 = -8403827609284457987LL;
int var_4 = 2090027561;
int var_5 = 1584397144;
signed char var_8 = (signed char)-120;
unsigned int var_9 = 2262396117U;
unsigned long long int var_11 = 547270901348626477ULL;
unsigned short var_13 = (unsigned short)49447;
int zero = 0;
unsigned short var_14 = (unsigned short)58146;
int var_15 = -1417397665;
unsigned int var_16 = 3302365236U;
unsigned int var_17 = 1806881529U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
