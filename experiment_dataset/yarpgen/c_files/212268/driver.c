#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)329;
short var_2 = (short)1906;
unsigned char var_3 = (unsigned char)2;
short var_4 = (short)-28582;
unsigned short var_5 = (unsigned short)47710;
short var_7 = (short)-24793;
int var_8 = 1428285005;
short var_9 = (short)19493;
int zero = 0;
short var_10 = (short)12472;
unsigned short var_11 = (unsigned short)5489;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
