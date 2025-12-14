#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1326;
unsigned short var_2 = (unsigned short)56661;
unsigned short var_12 = (unsigned short)28755;
unsigned int var_15 = 3157388530U;
int zero = 0;
int var_17 = -1579968055;
int var_18 = 68417656;
unsigned char var_19 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
