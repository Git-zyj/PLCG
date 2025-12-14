#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2649503628777898458ULL;
unsigned char var_2 = (unsigned char)99;
unsigned short var_16 = (unsigned short)29103;
short var_18 = (short)-2698;
int zero = 0;
short var_20 = (short)-4115;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 324252980U;
unsigned short var_23 = (unsigned short)54225;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
