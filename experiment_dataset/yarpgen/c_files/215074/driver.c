#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10850252876218306503ULL;
unsigned long long int var_1 = 17230768452523200212ULL;
unsigned short var_3 = (unsigned short)20105;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)31019;
int var_12 = 1311944270;
int zero = 0;
int var_14 = 1619644905;
unsigned long long int var_15 = 13011477533864178404ULL;
void init() {
}

void checksum() {
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
