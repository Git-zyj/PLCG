#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58155;
int var_2 = 1361004976;
long long int var_3 = -4570825141659369074LL;
unsigned int var_8 = 1454151942U;
unsigned char var_10 = (unsigned char)188;
short var_11 = (short)15653;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
int var_13 = 1251435043;
signed char var_14 = (signed char)-5;
unsigned short var_15 = (unsigned short)63900;
unsigned short var_16 = (unsigned short)56217;
short var_17 = (short)-25378;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
