#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -363826839;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)9;
unsigned short var_5 = (unsigned short)46004;
long long int var_9 = -6309780187533957566LL;
unsigned short var_10 = (unsigned short)38464;
signed char var_11 = (signed char)-90;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 1392789629;
unsigned short var_18 = (unsigned short)65199;
unsigned char var_19 = (unsigned char)124;
long long int var_20 = -8582808012344396092LL;
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
