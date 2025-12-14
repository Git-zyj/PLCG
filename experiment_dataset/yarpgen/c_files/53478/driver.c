#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 278030423U;
int var_2 = 764866395;
unsigned char var_3 = (unsigned char)157;
int var_4 = -918033803;
unsigned short var_5 = (unsigned short)28525;
short var_6 = (short)19409;
unsigned char var_9 = (unsigned char)119;
unsigned char var_10 = (unsigned char)175;
unsigned char var_12 = (unsigned char)5;
int var_13 = 988761660;
int var_14 = 1049847321;
int zero = 0;
long long int var_15 = -741904320192302498LL;
unsigned int var_16 = 2641351675U;
int var_17 = -485135747;
void init() {
}

void checksum() {
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
