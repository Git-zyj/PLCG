#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27302;
unsigned int var_4 = 2092044994U;
unsigned int var_8 = 130975531U;
unsigned int var_9 = 2781288104U;
short var_10 = (short)-23164;
int zero = 0;
short var_12 = (short)-24075;
short var_13 = (short)-5082;
short var_14 = (short)-27241;
short var_15 = (short)-906;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
