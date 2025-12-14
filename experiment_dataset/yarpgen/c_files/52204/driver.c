#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2599;
unsigned char var_1 = (unsigned char)6;
short var_2 = (short)-10062;
unsigned int var_3 = 4272466076U;
short var_4 = (short)8019;
long long int var_6 = 5272846708357033035LL;
int var_9 = -959732162;
unsigned char var_10 = (unsigned char)255;
int zero = 0;
unsigned int var_11 = 2412796159U;
short var_12 = (short)-7903;
unsigned long long int var_13 = 9195884687154836300ULL;
short var_14 = (short)-27066;
unsigned char var_15 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
