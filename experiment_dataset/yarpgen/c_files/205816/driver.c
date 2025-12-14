#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1556669403U;
unsigned char var_9 = (unsigned char)202;
long long int var_10 = -1182566527387004511LL;
unsigned int var_11 = 310392861U;
unsigned short var_17 = (unsigned short)46018;
int zero = 0;
unsigned short var_18 = (unsigned short)44236;
unsigned int var_19 = 2895185187U;
unsigned short var_20 = (unsigned short)52152;
unsigned char var_21 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
