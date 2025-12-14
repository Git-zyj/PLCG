#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11184193871414223254ULL;
signed char var_2 = (signed char)-122;
signed char var_8 = (signed char)-109;
long long int var_11 = 9160271965683337397LL;
short var_12 = (short)3576;
short var_16 = (short)-12751;
int zero = 0;
unsigned char var_17 = (unsigned char)239;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
