#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3630228658U;
short var_6 = (short)11316;
unsigned short var_7 = (unsigned short)50688;
unsigned char var_16 = (unsigned char)1;
int zero = 0;
unsigned long long int var_18 = 17659289078069300044ULL;
unsigned char var_19 = (unsigned char)130;
unsigned int var_20 = 1364794618U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
