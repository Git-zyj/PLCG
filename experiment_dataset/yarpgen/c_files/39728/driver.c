#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57848;
unsigned short var_3 = (unsigned short)12045;
unsigned char var_6 = (unsigned char)138;
unsigned char var_8 = (unsigned char)72;
int zero = 0;
unsigned char var_12 = (unsigned char)167;
short var_13 = (short)9858;
unsigned short var_14 = (unsigned short)38919;
unsigned short var_15 = (unsigned short)20084;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
