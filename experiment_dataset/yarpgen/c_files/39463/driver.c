#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
_Bool var_2 = (_Bool)1;
int var_3 = 338681757;
int var_6 = 287017753;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)249;
int var_10 = -1679380162;
int zero = 0;
unsigned long long int var_12 = 6611463903469292729ULL;
unsigned char var_13 = (unsigned char)202;
int var_14 = 1260597213;
int var_15 = -365263284;
void init() {
}

void checksum() {
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
