#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6552309347091022257LL;
signed char var_2 = (signed char)-20;
signed char var_3 = (signed char)-27;
int var_4 = -1806047470;
int var_6 = 1271006874;
int var_7 = 645964514;
unsigned short var_8 = (unsigned short)60748;
signed char var_10 = (signed char)-32;
int zero = 0;
unsigned char var_11 = (unsigned char)194;
int var_12 = 1296665727;
short var_13 = (short)-18244;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
