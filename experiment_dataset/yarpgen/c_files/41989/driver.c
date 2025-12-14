#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14614;
short var_2 = (short)17768;
short var_3 = (short)31100;
short var_4 = (short)29193;
short var_5 = (short)-8874;
short var_10 = (short)-23441;
short var_12 = (short)17068;
short var_15 = (short)1316;
int zero = 0;
short var_16 = (short)-27437;
unsigned int var_17 = 3319890684U;
short var_18 = (short)14546;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
