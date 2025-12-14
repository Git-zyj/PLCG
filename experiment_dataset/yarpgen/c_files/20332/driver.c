#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4910556057129773477LL;
unsigned char var_2 = (unsigned char)111;
unsigned short var_5 = (unsigned short)20853;
short var_9 = (short)-3834;
int var_10 = 906947220;
short var_12 = (short)-27591;
short var_13 = (short)-6686;
int zero = 0;
short var_14 = (short)-17834;
short var_15 = (short)-23251;
unsigned int var_16 = 1187445053U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
