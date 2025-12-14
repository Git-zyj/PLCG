#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36356;
unsigned long long int var_1 = 8172886756935970422ULL;
short var_2 = (short)-19829;
int var_4 = -1183460916;
long long int var_5 = 5216067809506351831LL;
short var_6 = (short)7998;
unsigned char var_7 = (unsigned char)109;
unsigned char var_8 = (unsigned char)250;
short var_9 = (short)21864;
int zero = 0;
unsigned long long int var_10 = 7941370566504654995ULL;
unsigned char var_11 = (unsigned char)188;
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
