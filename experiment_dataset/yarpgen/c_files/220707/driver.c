#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47279;
unsigned short var_2 = (unsigned short)23822;
unsigned char var_4 = (unsigned char)6;
signed char var_8 = (signed char)-51;
long long int var_13 = -2930491388786270550LL;
int zero = 0;
signed char var_16 = (signed char)2;
unsigned int var_17 = 1726140867U;
unsigned char var_18 = (unsigned char)126;
short var_19 = (short)8645;
int var_20 = 277874125;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
