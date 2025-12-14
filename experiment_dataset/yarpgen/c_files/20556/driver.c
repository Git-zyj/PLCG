#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13644434997533523476ULL;
unsigned short var_1 = (unsigned short)43895;
unsigned int var_5 = 1178209419U;
unsigned short var_6 = (unsigned short)21657;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)58646;
int zero = 0;
unsigned short var_10 = (unsigned short)4672;
int var_11 = 2119056574;
unsigned int var_12 = 1259698198U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
