#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23145;
unsigned int var_2 = 101057146U;
unsigned long long int var_4 = 6112645964412221604ULL;
long long int var_6 = -7395525292119828188LL;
unsigned short var_8 = (unsigned short)17301;
unsigned long long int var_13 = 7813573678448151268ULL;
unsigned int var_18 = 878339502U;
unsigned int var_19 = 2820337425U;
int zero = 0;
unsigned char var_20 = (unsigned char)185;
short var_21 = (short)-1352;
unsigned short var_22 = (unsigned short)218;
unsigned int var_23 = 3135231950U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
