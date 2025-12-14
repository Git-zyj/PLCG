#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1619753543;
unsigned long long int var_8 = 7028340394212933906ULL;
short var_10 = (short)-1323;
short var_11 = (short)5492;
int zero = 0;
unsigned int var_12 = 3126176656U;
long long int var_13 = 5884193586942039000LL;
unsigned short var_14 = (unsigned short)43536;
int var_15 = -881192896;
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
