#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -602178226;
long long int var_3 = 5155265938209451899LL;
short var_4 = (short)11601;
long long int var_10 = 4430986053601296749LL;
unsigned short var_12 = (unsigned short)50836;
unsigned short var_13 = (unsigned short)12995;
int var_14 = -589788213;
int zero = 0;
unsigned char var_15 = (unsigned char)94;
unsigned char var_16 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
