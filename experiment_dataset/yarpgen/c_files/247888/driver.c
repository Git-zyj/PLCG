#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4182330286U;
long long int var_2 = 2531066006064523817LL;
unsigned short var_3 = (unsigned short)19046;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)7805;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)224;
unsigned short var_16 = (unsigned short)55096;
unsigned int var_17 = 730160246U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
