#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)66;
unsigned short var_3 = (unsigned short)39351;
int var_4 = 1593114324;
int var_5 = 567152443;
unsigned long long int var_6 = 14111507444272839310ULL;
unsigned short var_13 = (unsigned short)27200;
int zero = 0;
unsigned short var_16 = (unsigned short)12469;
unsigned int var_17 = 2141040950U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
