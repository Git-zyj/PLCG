#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18011456308940153539ULL;
unsigned long long int var_8 = 13203957650529038384ULL;
unsigned long long int var_9 = 9643242774495588902ULL;
int zero = 0;
int var_12 = -1407454271;
long long int var_13 = -3705426307729620231LL;
unsigned short var_14 = (unsigned short)13089;
int var_15 = -2071599780;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
