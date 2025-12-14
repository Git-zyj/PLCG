#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13826415448978313063ULL;
unsigned short var_1 = (unsigned short)36282;
short var_2 = (short)-27595;
unsigned char var_5 = (unsigned char)190;
unsigned short var_8 = (unsigned short)11756;
int var_9 = 1555154739;
signed char var_10 = (signed char)51;
int zero = 0;
int var_11 = -887685260;
unsigned long long int var_12 = 11766769333673981470ULL;
unsigned short var_13 = (unsigned short)55664;
unsigned short var_14 = (unsigned short)58059;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
