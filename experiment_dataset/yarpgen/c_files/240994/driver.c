#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3236448810069180805LL;
unsigned char var_3 = (unsigned char)251;
unsigned char var_4 = (unsigned char)24;
unsigned char var_5 = (unsigned char)6;
unsigned long long int var_6 = 16136509609342045899ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 14814539301558408288ULL;
unsigned char var_11 = (unsigned char)129;
int zero = 0;
int var_12 = 1407358496;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)55513;
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
