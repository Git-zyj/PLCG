#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)12879;
unsigned long long int var_6 = 2649169388852487976ULL;
unsigned char var_8 = (unsigned char)91;
unsigned short var_10 = (unsigned short)5959;
int zero = 0;
long long int var_12 = 2885136901829687581LL;
long long int var_13 = -1072220329789281195LL;
unsigned int var_14 = 2328795170U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
