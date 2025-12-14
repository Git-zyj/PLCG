#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31475;
short var_4 = (short)-17906;
unsigned int var_5 = 589419886U;
signed char var_7 = (signed char)116;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)214;
unsigned char var_14 = (unsigned char)77;
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
