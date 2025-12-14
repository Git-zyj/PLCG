#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2075078994U;
int var_1 = 359775382;
long long int var_2 = 1229714071469591224LL;
short var_3 = (short)-24589;
long long int var_4 = 6649027047972408591LL;
unsigned int var_5 = 1349342587U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)77;
signed char var_9 = (signed char)100;
unsigned char var_10 = (unsigned char)99;
short var_11 = (short)-8984;
unsigned short var_12 = (unsigned short)36708;
int zero = 0;
unsigned char var_13 = (unsigned char)218;
long long int var_14 = 4536361359012663742LL;
unsigned int var_15 = 1212673786U;
unsigned short var_16 = (unsigned short)2797;
int var_17 = -1418325064;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
