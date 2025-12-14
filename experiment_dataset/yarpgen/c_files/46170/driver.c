#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13822;
short var_5 = (short)14138;
int var_13 = -1455873240;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)55219;
long long int var_21 = 194041405930363322LL;
unsigned char var_22 = (unsigned char)215;
unsigned long long int var_23 = 4644636718166771325ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
