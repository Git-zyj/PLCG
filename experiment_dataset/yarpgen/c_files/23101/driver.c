#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12418;
short var_4 = (short)19934;
_Bool var_9 = (_Bool)0;
long long int var_10 = 6401625617115668799LL;
int zero = 0;
unsigned short var_13 = (unsigned short)8002;
short var_14 = (short)31129;
unsigned short var_15 = (unsigned short)61980;
short var_16 = (short)22179;
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
