#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
unsigned short var_2 = (unsigned short)31604;
signed char var_4 = (signed char)-117;
unsigned char var_10 = (unsigned char)130;
_Bool var_14 = (_Bool)1;
long long int var_15 = 6831320364272904381LL;
int zero = 0;
long long int var_16 = 5832488849543981782LL;
unsigned int var_17 = 153337585U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
