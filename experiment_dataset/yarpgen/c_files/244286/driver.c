#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2468916097U;
unsigned long long int var_4 = 9744028286285226903ULL;
unsigned short var_5 = (unsigned short)31166;
unsigned char var_6 = (unsigned char)65;
unsigned char var_7 = (unsigned char)51;
unsigned int var_9 = 253719203U;
int zero = 0;
unsigned short var_10 = (unsigned short)18767;
unsigned short var_11 = (unsigned short)23345;
unsigned short var_12 = (unsigned short)371;
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
