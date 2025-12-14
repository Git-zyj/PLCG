#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
int var_1 = 515268479;
unsigned char var_4 = (unsigned char)113;
int var_5 = -2113368190;
unsigned char var_6 = (unsigned char)203;
int var_7 = 1281241274;
int var_8 = -25554861;
int var_10 = 1113898521;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_17 = -1387506794;
unsigned char var_18 = (unsigned char)2;
int var_19 = -375296676;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
