#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3005;
unsigned long long int var_2 = 629048192143450802ULL;
unsigned short var_3 = (unsigned short)63340;
unsigned int var_4 = 328519733U;
unsigned long long int var_7 = 15184977867768769068ULL;
unsigned short var_9 = (unsigned short)47922;
unsigned long long int var_10 = 309186292194820546ULL;
short var_12 = (short)-2063;
int zero = 0;
short var_13 = (short)18940;
unsigned int var_14 = 2484703664U;
void init() {
}

void checksum() {
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
