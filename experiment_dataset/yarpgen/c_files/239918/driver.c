#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18644;
_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)65173;
long long int var_7 = 113952111208755760LL;
signed char var_8 = (signed char)-71;
int var_9 = 1750045352;
int zero = 0;
int var_16 = -983858484;
int var_17 = -934431794;
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
