#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59951;
signed char var_2 = (signed char)101;
unsigned short var_5 = (unsigned short)54625;
unsigned short var_6 = (unsigned short)48009;
unsigned short var_7 = (unsigned short)16517;
unsigned int var_9 = 2214243414U;
int var_12 = 1519302908;
int zero = 0;
unsigned char var_14 = (unsigned char)178;
signed char var_15 = (signed char)-46;
int var_16 = 742270887;
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
