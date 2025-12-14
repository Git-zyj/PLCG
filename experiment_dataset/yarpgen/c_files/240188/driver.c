#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1235438178;
unsigned short var_1 = (unsigned short)50018;
int var_2 = 1945521074;
unsigned long long int var_3 = 11935947242885616851ULL;
int var_4 = 229051461;
int var_5 = 1057578327;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2771553787U;
int zero = 0;
long long int var_11 = -1681159825169974442LL;
unsigned short var_12 = (unsigned short)20569;
long long int var_13 = -3996436383199289648LL;
long long int var_14 = 7561390107481516063LL;
unsigned long long int var_15 = 7543918283414098523ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
