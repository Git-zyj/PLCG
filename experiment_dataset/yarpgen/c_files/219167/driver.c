#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)72;
long long int var_11 = -945359437973215524LL;
unsigned char var_12 = (unsigned char)123;
unsigned long long int var_16 = 2173043504936025175ULL;
long long int var_17 = 2958695304135500236LL;
int zero = 0;
unsigned short var_20 = (unsigned short)11997;
int var_21 = -598928669;
int var_22 = -188182531;
void init() {
}

void checksum() {
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
