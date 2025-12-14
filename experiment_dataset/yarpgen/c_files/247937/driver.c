#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2231427673U;
long long int var_2 = -7384971394118511786LL;
short var_3 = (short)22453;
long long int var_4 = -7475219246495488843LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)138;
unsigned long long int var_9 = 7067081982643464531ULL;
int var_12 = 250232395;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 2047600961;
void init() {
}

void checksum() {
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
