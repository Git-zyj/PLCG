#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17435;
unsigned int var_7 = 1485731624U;
unsigned long long int var_10 = 13539613905924890519ULL;
int zero = 0;
unsigned long long int var_11 = 15882322454081858230ULL;
short var_12 = (short)24870;
unsigned char var_13 = (unsigned char)34;
void init() {
}

void checksum() {
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
