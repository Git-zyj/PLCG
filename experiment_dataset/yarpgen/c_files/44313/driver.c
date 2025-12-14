#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16401740771399441051ULL;
short var_3 = (short)12908;
unsigned char var_4 = (unsigned char)167;
short var_5 = (short)-18687;
unsigned long long int var_6 = 1626841089214581182ULL;
unsigned long long int var_8 = 10951959857194638532ULL;
unsigned char var_11 = (unsigned char)66;
unsigned char var_12 = (unsigned char)28;
unsigned char var_13 = (unsigned char)31;
unsigned char var_16 = (unsigned char)1;
int zero = 0;
short var_17 = (short)4140;
int var_18 = -965766717;
unsigned char var_19 = (unsigned char)133;
unsigned long long int var_20 = 6057042428912294101ULL;
void init() {
}

void checksum() {
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
