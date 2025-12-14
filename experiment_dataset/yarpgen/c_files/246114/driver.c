#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17585828634536781016ULL;
unsigned char var_5 = (unsigned char)81;
short var_9 = (short)-6768;
unsigned short var_12 = (unsigned short)7706;
short var_13 = (short)-32000;
int zero = 0;
int var_15 = 547081960;
short var_16 = (short)-26453;
int var_17 = -1639543490;
void init() {
}

void checksum() {
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
