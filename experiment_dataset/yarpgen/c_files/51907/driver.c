#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14821430133446972532ULL;
unsigned short var_3 = (unsigned short)43482;
unsigned short var_5 = (unsigned short)31624;
unsigned char var_6 = (unsigned char)179;
signed char var_12 = (signed char)34;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2575551096U;
short var_17 = (short)1174;
void init() {
}

void checksum() {
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
