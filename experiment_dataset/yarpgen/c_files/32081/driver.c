#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29849;
unsigned long long int var_1 = 8605217480940233742ULL;
unsigned int var_2 = 3405036523U;
_Bool var_3 = (_Bool)1;
short var_5 = (short)16325;
unsigned short var_6 = (unsigned short)16445;
unsigned short var_7 = (unsigned short)30323;
unsigned char var_8 = (unsigned char)164;
unsigned char var_9 = (unsigned char)242;
int zero = 0;
unsigned int var_12 = 4083081155U;
int var_13 = -922100733;
signed char var_14 = (signed char)93;
unsigned char var_15 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
