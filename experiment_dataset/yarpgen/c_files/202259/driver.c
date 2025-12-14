#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15699;
short var_2 = (short)15485;
int var_4 = -1028766393;
unsigned int var_7 = 995603096U;
short var_8 = (short)-21317;
short var_10 = (short)31344;
unsigned short var_12 = (unsigned short)31843;
unsigned char var_13 = (unsigned char)180;
int zero = 0;
unsigned short var_14 = (unsigned short)4120;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)105;
void init() {
}

void checksum() {
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
