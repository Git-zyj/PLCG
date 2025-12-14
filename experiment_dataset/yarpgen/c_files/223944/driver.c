#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11119;
unsigned short var_3 = (unsigned short)46551;
long long int var_4 = -7368466880761242420LL;
unsigned short var_8 = (unsigned short)16148;
unsigned short var_10 = (unsigned short)21285;
long long int var_12 = 7765286905061679528LL;
long long int var_13 = -3536991416449644847LL;
int zero = 0;
signed char var_14 = (signed char)68;
unsigned char var_15 = (unsigned char)103;
unsigned short var_16 = (unsigned short)12772;
void init() {
}

void checksum() {
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
