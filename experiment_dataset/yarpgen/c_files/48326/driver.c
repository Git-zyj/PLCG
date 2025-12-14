#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)16;
unsigned long long int var_4 = 11362214916463882807ULL;
unsigned char var_5 = (unsigned char)154;
unsigned short var_9 = (unsigned short)29696;
int zero = 0;
short var_12 = (short)19341;
unsigned short var_13 = (unsigned short)62840;
short var_14 = (short)-27268;
void init() {
}

void checksum() {
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
