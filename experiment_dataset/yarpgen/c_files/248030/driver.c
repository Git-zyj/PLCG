#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)69;
unsigned char var_4 = (unsigned char)155;
short var_7 = (short)866;
unsigned short var_8 = (unsigned short)30006;
unsigned char var_9 = (unsigned char)168;
signed char var_10 = (signed char)-18;
unsigned short var_12 = (unsigned short)16294;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)28;
unsigned char var_17 = (unsigned char)119;
int var_18 = 1611651611;
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
