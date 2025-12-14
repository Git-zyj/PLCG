#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -936099719;
short var_5 = (short)9788;
long long int var_7 = 647701552907511317LL;
unsigned short var_8 = (unsigned short)21575;
int var_9 = -1611919017;
int var_10 = 563328568;
int var_12 = 1364634829;
unsigned char var_16 = (unsigned char)231;
unsigned long long int var_17 = 13702933562129780540ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)242;
long long int var_19 = -735407168864736207LL;
unsigned char var_20 = (unsigned char)244;
unsigned char var_21 = (unsigned char)5;
short var_22 = (short)5329;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
