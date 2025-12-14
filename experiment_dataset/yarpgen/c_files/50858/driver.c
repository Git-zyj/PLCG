#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1416970673;
short var_7 = (short)2153;
unsigned long long int var_9 = 13286921024952813700ULL;
unsigned long long int var_10 = 3979745525763397506ULL;
unsigned char var_14 = (unsigned char)141;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = 1984833233;
short var_17 = (short)27205;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
