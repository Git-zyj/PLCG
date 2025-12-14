#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32396;
unsigned short var_1 = (unsigned short)36202;
int var_2 = 216443864;
unsigned char var_3 = (unsigned char)232;
unsigned short var_4 = (unsigned short)2582;
unsigned short var_5 = (unsigned short)3550;
unsigned short var_6 = (unsigned short)57557;
long long int var_7 = -2009853478440450796LL;
unsigned short var_9 = (unsigned short)41277;
unsigned short var_10 = (unsigned short)28565;
int zero = 0;
int var_11 = 787617478;
unsigned long long int var_12 = 11501742304401078497ULL;
unsigned int var_13 = 2641740262U;
int var_14 = -1043853093;
unsigned short var_15 = (unsigned short)33985;
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
