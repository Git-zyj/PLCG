#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8174525577856666645LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)224;
unsigned char var_13 = (unsigned char)98;
int zero = 0;
int var_17 = -453727228;
unsigned short var_18 = (unsigned short)43481;
unsigned long long int var_19 = 2717598207369050323ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
