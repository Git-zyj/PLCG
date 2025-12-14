#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)10;
signed char var_4 = (signed char)125;
unsigned char var_9 = (unsigned char)159;
unsigned short var_10 = (unsigned short)64392;
unsigned long long int var_15 = 17377834640702065329ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)62827;
short var_17 = (short)-13096;
unsigned int var_18 = 1541525138U;
unsigned int var_19 = 1994881034U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
