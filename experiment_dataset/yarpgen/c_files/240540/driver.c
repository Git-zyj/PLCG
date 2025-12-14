#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4756;
unsigned int var_3 = 1584252452U;
short var_4 = (short)31872;
unsigned char var_5 = (unsigned char)141;
signed char var_7 = (signed char)71;
unsigned short var_8 = (unsigned short)15433;
short var_15 = (short)3903;
int zero = 0;
int var_17 = -1636255213;
unsigned long long int var_18 = 17655226835995600436ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
