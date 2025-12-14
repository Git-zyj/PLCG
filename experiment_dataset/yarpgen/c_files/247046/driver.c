#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6522;
unsigned int var_1 = 3386140899U;
unsigned long long int var_2 = 10198142319174505151ULL;
unsigned long long int var_4 = 5865749683322319709ULL;
unsigned char var_5 = (unsigned char)16;
unsigned char var_6 = (unsigned char)127;
unsigned short var_7 = (unsigned short)49801;
unsigned char var_8 = (unsigned char)165;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 12701948045950135562ULL;
unsigned char var_11 = (unsigned char)206;
long long int var_12 = 4564060262018068516LL;
int zero = 0;
long long int var_13 = 4640444811309666698LL;
long long int var_14 = 4145502148690716510LL;
unsigned short var_15 = (unsigned short)63670;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
