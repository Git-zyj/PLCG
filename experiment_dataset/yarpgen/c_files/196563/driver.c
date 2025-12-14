#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45272;
short var_1 = (short)28759;
short var_3 = (short)-22794;
unsigned char var_9 = (unsigned char)80;
unsigned short var_10 = (unsigned short)36255;
int zero = 0;
int var_13 = -602897717;
unsigned int var_14 = 717331834U;
unsigned int var_15 = 660917485U;
void init() {
}

void checksum() {
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
