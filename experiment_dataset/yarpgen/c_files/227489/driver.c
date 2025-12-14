#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -996463033;
unsigned int var_2 = 3528022013U;
short var_6 = (short)-1189;
long long int var_8 = -752587701252253918LL;
int var_12 = -1648950234;
long long int var_13 = -5436120268572958738LL;
int zero = 0;
unsigned short var_15 = (unsigned short)8247;
long long int var_16 = -106093785454506832LL;
void init() {
}

void checksum() {
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
