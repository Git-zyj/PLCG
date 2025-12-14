#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16182;
short var_2 = (short)-10043;
int var_3 = -1600634252;
signed char var_4 = (signed char)106;
long long int var_10 = -3602662063516494514LL;
unsigned char var_11 = (unsigned char)85;
int zero = 0;
unsigned char var_12 = (unsigned char)96;
unsigned char var_13 = (unsigned char)220;
long long int var_14 = -7760682635327488558LL;
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
