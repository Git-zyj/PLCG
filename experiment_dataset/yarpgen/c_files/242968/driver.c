#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)755;
unsigned char var_5 = (unsigned char)32;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)28318;
signed char var_9 = (signed char)-48;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1639117145U;
int zero = 0;
signed char var_16 = (signed char)-111;
unsigned int var_17 = 2047341166U;
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
