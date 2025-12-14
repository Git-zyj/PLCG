#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3556;
short var_2 = (short)-18447;
short var_3 = (short)-4829;
short var_5 = (short)-744;
short var_6 = (short)-11046;
short var_9 = (short)32102;
short var_11 = (short)12640;
int zero = 0;
short var_13 = (short)20754;
short var_14 = (short)-27604;
short var_15 = (short)-15305;
short var_16 = (short)-21054;
short var_17 = (short)15200;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
