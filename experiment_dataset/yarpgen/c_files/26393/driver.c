#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1929678907;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)55071;
short var_4 = (short)359;
unsigned char var_7 = (unsigned char)173;
unsigned char var_8 = (unsigned char)24;
long long int var_9 = 2702629262660787875LL;
int zero = 0;
int var_12 = -1259708623;
unsigned char var_13 = (unsigned char)144;
_Bool var_14 = (_Bool)0;
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
