#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16049632019540113676ULL;
unsigned short var_6 = (unsigned short)5112;
unsigned short var_9 = (unsigned short)11232;
unsigned char var_11 = (unsigned char)155;
int zero = 0;
unsigned short var_12 = (unsigned short)36683;
short var_13 = (short)-26946;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
