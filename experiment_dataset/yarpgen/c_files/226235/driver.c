#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6841090409205007697ULL;
unsigned long long int var_8 = 16058182994696592144ULL;
unsigned int var_10 = 3647623705U;
unsigned char var_11 = (unsigned char)47;
int zero = 0;
unsigned short var_12 = (unsigned short)36289;
unsigned char var_13 = (unsigned char)44;
long long int var_14 = -8515935610292958025LL;
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
