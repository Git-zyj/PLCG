#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27279;
long long int var_1 = 7774942472310575480LL;
unsigned short var_2 = (unsigned short)57471;
long long int var_3 = 97065937460683005LL;
unsigned char var_4 = (unsigned char)81;
unsigned short var_5 = (unsigned short)65370;
unsigned int var_7 = 836076496U;
signed char var_11 = (signed char)38;
long long int var_12 = 1088469567495834304LL;
int zero = 0;
unsigned short var_14 = (unsigned short)46641;
unsigned short var_15 = (unsigned short)53629;
void init() {
}

void checksum() {
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
