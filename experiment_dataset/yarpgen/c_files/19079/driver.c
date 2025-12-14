#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2434;
unsigned char var_2 = (unsigned char)145;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-838;
unsigned long long int var_8 = 14018207004532124536ULL;
unsigned int var_9 = 3439356621U;
int zero = 0;
int var_10 = 522195191;
_Bool var_11 = (_Bool)1;
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
