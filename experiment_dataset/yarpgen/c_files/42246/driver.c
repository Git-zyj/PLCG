#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1330887213;
int var_1 = -1335933467;
int var_2 = -108212545;
int var_3 = -1253663951;
int var_4 = 1023646448;
int var_5 = -799830258;
int var_6 = 930281819;
int var_8 = -1291159351;
int zero = 0;
int var_10 = 1302284421;
int var_11 = 539504750;
int var_12 = 893551593;
int var_13 = 779551103;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
