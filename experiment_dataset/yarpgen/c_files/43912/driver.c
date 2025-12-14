#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1299581580U;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 3215273065265787147ULL;
unsigned char var_5 = (unsigned char)253;
unsigned long long int var_6 = 8545421873346037647ULL;
unsigned short var_8 = (unsigned short)31885;
unsigned int var_9 = 952542588U;
unsigned int var_10 = 3867981307U;
int zero = 0;
unsigned short var_11 = (unsigned short)54828;
int var_12 = 1938281220;
unsigned long long int var_13 = 4274252704834788933ULL;
unsigned long long int var_14 = 69977271189092670ULL;
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
