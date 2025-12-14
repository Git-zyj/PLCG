#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8225270189095766032LL;
_Bool var_2 = (_Bool)0;
int var_8 = -2142247296;
short var_9 = (short)-30158;
unsigned char var_11 = (unsigned char)67;
unsigned short var_12 = (unsigned short)10911;
long long int var_13 = 6296141821525861550LL;
int zero = 0;
int var_19 = -1921478696;
short var_20 = (short)-19750;
void init() {
}

void checksum() {
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
