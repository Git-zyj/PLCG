#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31399;
unsigned short var_9 = (unsigned short)3135;
int var_10 = 58339652;
long long int var_11 = -4038993776508909862LL;
unsigned int var_14 = 580256902U;
long long int var_18 = -3314978380744549471LL;
int zero = 0;
unsigned char var_20 = (unsigned char)92;
unsigned char var_21 = (unsigned char)239;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
