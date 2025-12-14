#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2844133369U;
unsigned int var_2 = 1060687252U;
unsigned short var_3 = (unsigned short)9369;
unsigned int var_4 = 1744693977U;
unsigned int var_7 = 1682908833U;
int var_8 = -664073455;
unsigned char var_9 = (unsigned char)227;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)11958;
int zero = 0;
long long int var_13 = 4577856234352782475LL;
unsigned long long int var_14 = 12968279088333052562ULL;
unsigned int var_15 = 61147930U;
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
