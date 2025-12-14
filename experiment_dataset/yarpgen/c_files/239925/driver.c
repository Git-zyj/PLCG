#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2580;
long long int var_3 = 521635715402891437LL;
int var_4 = 99610479;
int var_7 = -631928192;
unsigned short var_11 = (unsigned short)63876;
int zero = 0;
short var_12 = (short)-32513;
int var_13 = 188661021;
unsigned short var_14 = (unsigned short)63909;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
