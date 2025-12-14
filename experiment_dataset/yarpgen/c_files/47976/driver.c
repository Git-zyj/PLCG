#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1827226846106424162LL;
unsigned short var_7 = (unsigned short)10759;
unsigned short var_8 = (unsigned short)31392;
_Bool var_13 = (_Bool)0;
int var_15 = -236392840;
short var_17 = (short)31897;
int zero = 0;
int var_18 = -1457791354;
unsigned char var_19 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
