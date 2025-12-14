#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_5 = 123585177U;
unsigned long long int var_7 = 7841009548772993319ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)30448;
short var_13 = (short)2818;
long long int var_14 = 3744746391376837074LL;
unsigned short var_15 = (unsigned short)12347;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
