#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9975883483122330428ULL;
unsigned long long int var_2 = 3467265355828590433ULL;
long long int var_3 = 2407554210648972251LL;
unsigned long long int var_7 = 17797213794615136295ULL;
int var_9 = -26656288;
long long int var_12 = 4209503639497439475LL;
int var_14 = -1178929421;
int var_16 = -664813864;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)206;
short var_21 = (short)-4599;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
