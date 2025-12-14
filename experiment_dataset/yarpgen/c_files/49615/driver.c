#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4124;
short var_3 = (short)1116;
unsigned int var_7 = 1550740854U;
unsigned int var_9 = 2646852572U;
unsigned short var_14 = (unsigned short)40815;
unsigned short var_16 = (unsigned short)48937;
unsigned short var_17 = (unsigned short)65232;
int zero = 0;
unsigned char var_18 = (unsigned char)229;
unsigned short var_19 = (unsigned short)19645;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
