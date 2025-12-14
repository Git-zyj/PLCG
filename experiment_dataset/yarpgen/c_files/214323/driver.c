#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1078540510;
unsigned int var_1 = 1031803493U;
int var_2 = -417327010;
unsigned long long int var_5 = 6788371591177734311ULL;
unsigned int var_6 = 3769906594U;
unsigned long long int var_8 = 3002231662271649197ULL;
unsigned char var_9 = (unsigned char)34;
int var_12 = -1467345178;
unsigned short var_16 = (unsigned short)43875;
unsigned long long int var_19 = 12631846691533037479ULL;
int zero = 0;
int var_20 = 1633608377;
short var_21 = (short)21710;
unsigned int var_22 = 961557703U;
unsigned short var_23 = (unsigned short)56740;
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
