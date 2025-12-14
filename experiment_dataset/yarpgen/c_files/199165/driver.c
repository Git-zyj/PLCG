#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17024400697208144784ULL;
unsigned short var_1 = (unsigned short)28597;
unsigned long long int var_2 = 11043584762022233246ULL;
unsigned short var_3 = (unsigned short)13108;
unsigned char var_4 = (unsigned char)190;
long long int var_5 = -3277040435363602305LL;
long long int var_6 = 6751945934647976573LL;
unsigned short var_8 = (unsigned short)27875;
signed char var_10 = (signed char)-123;
int zero = 0;
int var_14 = 1890105013;
unsigned char var_15 = (unsigned char)101;
unsigned long long int var_16 = 1176747353520906986ULL;
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
